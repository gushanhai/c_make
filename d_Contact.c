#include"d_Contact.h"
int find_name(Contact* pc, const char* name);
int find_age(Contact* pc, const char* age);
int find_tele(Contact* pc, const char* tele);
int find_addr(Contact* pc, const char* addr);

//读取通讯录
void LoadContact(Contact* pc)
{
	FILE* pf = (Peoinfo*)fopen("contact.dat", "rb");
	if (pf == NULL)
	{
		ferror("LoadContact");
		return;
	}
	//读文件
	Peoinfo tmp = { 0 };
	while (fread(&tmp, sizeof(Peoinfo), 1, pf))
	{
		if (checkContact(pc) == 1)
			return;
		pc->data[pc->con_sz] = tmp;
		pc->con_sz++;
	}

	//关闭文件
	fclose(pf);
	pf = NULL;
}

//动态初始化通讯录
void InitContact(Contact* pc)
{
	assert(pc);
	pc->data =(Peoinfo*) calloc(con_num, sizeof(Peoinfo));
	if (pc == NULL)
	{
		printf("初始化通讯录失败!\n");
		return;
	}
	pc->con_sz = 0;
	pc->cap = con_num;
	LoadContact(pc);
}


//增容
int checkContact(Contact* pc)
{
	if (pc->con_sz == pc->cap)
	{
		Peoinfo* tmp = (Peoinfo*)realloc(pc->data, (pc->cap + con_num_add) * sizeof(Peoinfo));
		if (tmp == NULL)
		{
			perror("checkContact");
			return 1;
		}
		else
		{
			pc->data = tmp;
			pc->cap += con_num_add;
			printf("增容成功\n");
			return 0;
		}
	}
}
//静态初始化通讯录
//void InitContact(Contact* pc)
//{
//	memset(pc, 0, sizeof(pc->data));
//	pc->con_sz = 0;
//}

//添加联系人
void AddContact(Contact* pc)
{
	assert(pc);
	if (pc->con_sz >= con_num)
	{
		checkContact(pc);
	}
	printf("请输入姓名：>\n");
	scanf("%s", pc->data[pc->con_sz].name);
	printf("请输入年龄：>\n");
	scanf("%d", &(pc->data[pc->con_sz].age));
	printf("请输入性别：>\n");
	scanf("%s", pc->data[pc->con_sz].sex);
	printf("请输入电话号：>\n");
	scanf("%s", pc->data[pc->con_sz].tele);
	printf("请输入地址：>\n");
	scanf("%s", pc->data[pc->con_sz].addr);
	pc->con_sz++;
	printf("联系人添加成功\n");
}

//按姓名查找,并且返回该联系人下标
int find_name(Contact* pc, const char* name)
{
	for (int i = 0; i < pc->con_sz; i++)
	{
		if (strcmp(pc->data[i].name  ,name) == 0)
		{
			return i;
		}
	}
}

//按年龄查找,并且返回该联系人下标
int find_age(Contact* pc, const int age)
{
	for (int i = 0; i < pc->con_sz; i++)
	{
		if (pc->data[i].age == age)
		{
			return i;
		}
	}
}

//按电话号查找,并且返回该联系人下标
int find_tele(Contact* pc, const char* tele)
{
	for (int i = 0; i < pc->con_sz; i++)
	{
		if (strcmp(pc->data[i].tele, tele) == 0)
		{
			return i;
		}
	}
}

//按地址查找,并且返回该联系人下标
int find_addr(Contact* pc, const char* addr)
{
	for (int i = 0; i < pc->con_sz; i++)
	{
		if (strcmp(pc->data[i].addr, addr) == 0)
		{
			return i;
		}
	}
}
//删除联系人
void DelContact(Contact* pc)
{
	if (pc->con_sz == 0)
	{
		printf("通讯录为空，无法删除!\n");
		return;
	}
	char name[20];
	printf("请输入你要删除联系人的姓名:>\n");
	scanf("%s", name);
	int flag = -1;
	flag = find_name(pc, name);
	if (flag == -1)
	{
		printf("未找到该联系人\n");
		return;
	}
	else
	{
		for (int i = flag; i < pc->con_sz; i++)
		{
			pc->data[i] = pc->data[i + 1];
		}
	}
	pc->con_sz--;
	printf("删除成功!");
}

//显示通讯录全部联系人
void ShowContact(Contact* pc)
{
	printf("%-20s\t%-3s\t%-5s\t%-12s\t%-30s\n", "姓名", "年龄", "性别", "电话", "地址");
	if (pc->con_sz == 0)
	{
		printf("通讯录为空\n");
		return;
	}
	for (int i = 0; i < pc->con_sz; i++)
	{
		printf("%-20s\t%-3d\t%-5s\t%-12s\t%-30s\n", pc->data[i].name
			, pc->data[i].age
			, pc->data[i].sex
			, pc->data[i].tele
			, pc->data[i].addr);
	}
}

//查找联系人
void SeatchContact(Contact* pc)
{
	assert(pc);
	if (pc->con_sz == 0)
	{
		printf("通讯录为空，无法查找!\n");
		return;
	}
	int search = 0;
	char name[20];
	int age;
	char tele[12];
	char addr[30];
	int flag = -1;
	printf("请输入要查找的方式:>\n");
	printf("1.name 2.age 3.tele 4.addr\n");
	scanf("%d", &search);
	switch (search)
	{
	case 1:
		printf("请输入姓名:>\n");
		scanf("%s", name);
		flag = find_name(pc, name);
		break;
	case 2:
		printf("请输入年龄:>\n");
		scanf("%d", &age);
		flag = find_age(pc, age);
		break;
	case 3:
		printf("请输入电话号:>\n");
		scanf("%s", tele);
		flag = find_tele(pc, tele);
		break;
	case 4:
		printf("请输入地址:>\n");
		scanf("%s", addr);
		flag = find_addr(pc, addr);
		break;
	default:
		printf("没有该查找方式:\n");
		break;
	}
	if (flag != -1)
	{
		printf("%-20s\t%-3s\t%-5s\t%-12s\t%-30s\n", "姓名", "年龄", "性别", "电话", "地址");
		printf("%-20s\t%-3d\t%-5s\t%-12s\t%-30s\n", pc->data[flag].name
			, pc->data[flag].age
			, pc->data[flag].sex
			, pc->data[flag].tele
			, pc->data[flag].addr);
	}
}

//修改联系人信息
void ModifyContact(Contact* pc)
{
	char name[20];
	printf("请输入要修改的联系人的姓名:>\n");
	scanf("%s", name);
	int flag = -1;
	int input = 0;
	flag = find_name(pc, name);
	if (flag != -1)
	{
		printf("请输入要修改的内容:>");
		printf("1.name 2.age 3.sex 4.tele 5.addr");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("请输入要修改的姓名:\n");
			scanf("%s", pc->data[flag].name);
			break;
		case 2:
			printf("请输入要修改的年龄:\n");
			scanf("%d", &(pc->data[flag].age));
			break;
		case 3:
			printf("请输入要修改的性别:\n");
			scanf("%s", pc->data[flag].sex);
			break;
		case 4:
			printf("请输入要修改的电话号:\n");
			scanf("%s", pc->data[flag].tele);
			break;
		case 5:
			printf("请输入要修改的地址:\n");
			scanf("%s", pc->data[flag].addr);
			break;
		default:
			printf("没有该选项!\n");
		}
	}
	printf("修改成功!\n");
}


q_name(const void* p1,const void* p2)
{
	return strcmp(((Peoinfo*)p1)->name ,((Peoinfo*)p2)->name);
}
q_age(const void* p1, const void* p2)
{
	return ((Peoinfo*)p1)->age - ((Peoinfo*)p2)->age;
}
//对联系人进行排序
void SortContact(Contact* pc)
{
	int input = 0;
	printf("请选择排序方式:\n");
	printf("1.name  2.age\n");
	scanf("%d", &input);
	switch (input)
	{
	case 1:
		qsort(pc->data, pc->con_sz, sizeof(Peoinfo), q_name);
		break;
	case 2:
		qsort(pc, pc->con_sz, sizeof(Peoinfo) , q_age);
		break;
	default:
		break;
	}
}

//销毁通讯录
void DestroyContact(Contact* pc)
{
	free(pc->data);
	pc->data = NULL;
	pc->cap = 0;
	pc->con_sz = 0;
}

void SaveContact(Contact* pc)//保存通讯录
{
	FILE* pf = fopen("contact.dat", "wb");
	if (pf == NULL)
	{
		perror("SaveContact");
		return;
	}

	//写数据
	for (int i = 0; i < pc->con_sz; i++)
	{
		fwrite(pc->data + i, sizeof(Peoinfo), 1, pf);
	}

	//关闭文件
	fclose(pf);
	pf == NULL;
}