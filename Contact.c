#include "Contact.h"
int Checkcapacticy(Contact* pc);
//静态版本
//void Init_con(Contact* pc)//初始化通讯录
//{
//	memset(pc->data, 0, sizeof(pc->data));
//	pc->con_sz = 0;
//}

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
		if (Checkcapacticy(pc) == 1)
			return;
		pc->data[pc->con_sz] = tmp;
		pc->con_sz++;
	}

	//关闭文件
	fclose(pf);
	pf = NULL;
}
//动态版本
void Init_con(Contact* pc)//初始化通讯录
{
	assert(pc);
	pc->data = (Peoinfo*)malloc(default_sz * sizeof(Peoinfo));
	if (pc == NULL)
	{
		perror("Init_con");
		return;
	}
	pc->con_sz = 0;
	pc->capacticy = default_sz;
	LoadContact(pc);
}

//void AddConcact(Contact* pc)//增加联系人
//{
//	assert(pc);
//	if (pc->con_sz == con_num)
//	{
//		printf("通讯录已满,无法添加联系人\n");
//		return;
//	}
//	printf("请输入联系人姓名：>\n");
//	scanf("%s", pc->data[pc->con_sz].name);
//	printf("请输入联系人年龄：>\n");
//	scanf("%d", &(pc->data[pc->con_sz].age));
//	printf("请输入联系人性别：>\n");
//	scanf("%s", pc->data[pc->con_sz].sex);
//	printf("请输入联系人电话号：>\n");
//	scanf("%s", pc->data[pc->con_sz].tele);
//	printf("请输入联系人地址：>\n");
//	scanf("%s", pc->data[pc->con_sz].add);
//	pc->con_sz++;
//	printf("联系人添加成功\n");
//}


//进行增容
int Checkcapacticy(Contact* pc)
{
	if(pc->con_sz==pc->capacticy)
	{
		Peoinfo* ptr = (Peoinfo*)realloc(pc->data, (pc->capacticy + inc_sz) * sizeof(Peoinfo));
		if (pc == NULL)
		{
			perror("Checkcapacticy");
			return 1;
		}
		else
		{
			pc->data = ptr;
			pc->capacticy += inc_sz;
			printf("增容成功\n");
			return 0;
		}
	}
	return 2;
}

//动态添加联系人
void AddConcact(Contact* pc)//增加联系人
{
	assert(pc);
	int pd = Checkcapacticy(pc);
	if (pd==1)
	{
		printf("增容失败\n");
		return;
	}
	printf("请输入联系人姓名：>\n");
	scanf("%s", pc->data[pc->con_sz].name);
	printf("请输入联系人年龄：>\n");
	scanf("%d", &(pc->data[pc->con_sz].age));
	printf("请输入联系人性别：>\n");
	scanf("%s", pc->data[pc->con_sz].sex);
	printf("请输入联系人电话号：>\n");
	scanf("%s", pc->data[pc->con_sz].tele);
	printf("请输入联系人地址：>\n");
	scanf("%s", pc->data[pc->con_sz].add);
	pc->con_sz++;
	printf("联系人添加成功\n");
}


void ShowContact(const Contact* pc)//显示通讯录中所有联系人
{
	printf("%-20s\t%-4s\t%-5s\t%-11s\t%-30s\n", "名字", "年龄", "性别", "电话号", "地址");
	for (int i = 0; i < pc->con_sz; i++)
	{
		printf("%-20s\t%-4d\t%-5s\t%-11s\t%-30s\n", pc->data[i].name,
			pc->data[i].age,
			pc->data[i].sex,
			pc->data[i].tele,
			pc->data[i].add);
	}
}

int find_name(const Contact* pc,char* fd_name)//按名字查找
{
	for (int i = 0; i < pc->con_sz; i++)
	{
		if (strcmp(pc->data[i].name, fd_name) == 0)
		{
			return i;
		}
	}
	return -1;
}
void DelContact(Contact* pc)//删除通讯录中指定姓名的联系人
{
	if (pc->con_sz == 0)
	{
		printf("通讯录为空，无法删除\n");
	}
	char name[20];
	printf("请选择要删除联系人的姓名:>\n");
	scanf("%s", &name);
	int dd = find_name(pc, name);
	if (dd == -1)
	{
		printf("通讯录中没有该联系人\n");
	}
	else
	{
		for (int i = dd; i < pc->con_sz-1; i++)
		{
			//memmove(pc.data[i + 1], pc->data[i], sizeof(pc->data) * (pc->con_sz - dd));
			pc->data[i] = pc->data[i + 1];
		}
		pc->con_sz--;
		printf("删除该联系人成功\n");
	}
}

void SearchContact(const Contact* pc)//查找联系人
{
	char name[Peo_name];
	printf("请输入要查找的联系人姓名:>\n");
	scanf("%s", name);
	int dd = find_name(pc, name);
	if (dd == -1)
	{
		printf("通讯录中未查找到此人\n");
	}
	else
	{
		printf("已查找到该联系人：\n");
		printf("%-20s\t%-4s\t%-5s\t%-11s\t%-30s\n", "名字", "年龄", "性别", "电话号", "地址");
		printf("%-20s\t%-4d\t%-5s\t%-11s\t%-30s\n", pc->data[dd].name,
			pc->data[dd].age,
			pc->data[dd].sex,
			pc->data[dd].tele,
			pc->data[dd].add);
	}
}
void Sort_action_name(Contact* pc, int i)//按照姓名进行排序
{
	int ret = 0;
	for (int x = 0; x < pc->con_sz-1; x++)
	{
		for (int y = 0; y < pc->con_sz - 1 - x; y++)
		{
			if (strcmp(pc->data[y].name, pc->data[y + 1].name)>0)
			{
				Peoinfo x;
				x = pc->data[y];
				pc->data[y] = pc->data[y + 1];
				pc->data[y + 1] = x;
			}
		}
	}
	printf("排序完成\n");
}
Sort_action_age(Contact* pc, int sort)//按照年龄进行排序
{
	for (int i = 0; i < sort - 1; i++)
	{
		for (int j = 0; j < sort - 1 - i; j++)
		{
			if (pc->data[j].age > pc->data[j + 1].age)
			{
				Peoinfo x = pc->data[j];
				pc->data[j] = pc->data[j + 1];
				pc->data[j + 1] = x;
			}
		}
	}
	printf("排序完成\n");
}

void SortContact(Contact* pc)//排序
{
	printf("请选择排序方法:>\n");
	printf("####    1.name    #####\n");
	printf("####    2.age     #####\n");
	int sort;
	scanf("%d", &sort);
	switch (sort)
	{
	case name:
		Sort_action_name(pc, sort);
		break;
	case age:
		Sort_action_age(pc, sort);
		break;
	default:
		printf("选择错误，排序失败\n");
	}
}

void ModfiyContact(Contact* pc)//修改联系人信息
{
	char fd_name[20];
	printf("请输入要修改联系人姓名:>\n");
	scanf("%s", fd_name);
	int ret = find_name(pc, fd_name);
	if (ret == -1)
	{
		printf("通讯录中没有此人，无法修改\n");
		return;
	}
	else
	{
		int input = 0;
		printf("####    1.name    #####\n");
		printf("####    2.age     #####\n");
		printf("####    3.sex     #####\n");
		printf("####    4.tele    #####\n");
		printf("####    5.add     #####\n");
		printf("请输入要修改信息：\n");
		scanf("%d", &input);
		switch (input)
		{
		case name:
			printf("请输入联系人姓名：>\n");
			scanf("%s", pc->data[ret].name);
			printf("修改成功\n");
			break;
		case age:
			printf("请输入联系人年龄：>\n");
			scanf("%d", &(pc->data[ret].age));
			printf("修改成功\n");
			break;
		case sex:
			printf("请输入联系人性别：>\n");
			scanf("%s", pc->data[ret].sex);
			printf("修改成功\n");
			break;
		case tele:
			printf("请输入联系人电话号：>\n");
			scanf("%s", pc->data[ret].tele);
			printf("修改成功\n");
			break;
		case add:
			printf("请输入联系人地址：>\n");
			scanf("%s", pc->data[ret].add);
			printf("修改成功\n");
			break;
		}
	}
}

//销毁通讯录
void DestroyContact(Contact* pc)
{
	free(pc->data);
	pc->data = NULL;
	pc->capacticy = 0;
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