#include "Contact.h"

void Init_con(Contact* pc)//初始化通讯录
{
	memset(pc->data, 0, sizeof(pc->data));
	pc->con_sz = 0;
}

void AddConcact(Contact* pc)//增加联系人
{
	assert(pc);
	if (pc->con_sz == con_num)
	{
		printf("通讯录已满,无法添加联系人\n");
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
void Sort_action(Contact* pc, int i)//未完成
{
	int ret = 0;
	for (int x = 0; x < pc->con_sz-1; x++)
	{
		for (int y = 0; y < pc->con_sz - 1 - x; y++)
		{
			ret = memcpy(pc->data[y].name, pc->data[y + 1].name, Peo_name);
			if (ret == 1)
			{
				Contact x[1] = pc->data[y];
				pc->data[y] = pc->data[y + 1];
				pc->data[y + 1] = x[1];
			}
		}
	}
}

void SortContact(Contact* pc)//排序（未完成）
{
	printf("请选择排序方法:>\n");
	printf("####    1.name    #####\n");
	printf("####    2.age     #####\n");
	printf("####    3.sex     #####\n");
	printf("####    4.tele    #####\n");
	printf("####    5.add     #####\n");
	int sort;
	scanf("%d", &sort);
	switch (sort)
	{
	case name:
		
		break;
	case age:
		break;
	case sex:
		break;
	case tele:
		break;
	case add:
		break;

	}
}