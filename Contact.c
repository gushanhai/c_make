#include "Contact.h"

void Init_con(Contact* pc)//��ʼ��ͨѶ¼
{
	memset(pc->data, 0, sizeof(pc->data));
	pc->con_sz = 0;
}

void AddConcact(Contact* pc)//������ϵ��
{
	assert(pc);
	if (pc->con_sz == con_num)
	{
		printf("ͨѶ¼����,�޷������ϵ��\n");
		return;
	}
	printf("��������ϵ��������>\n");
	scanf("%s", pc->data[pc->con_sz].name);
	printf("��������ϵ�����䣺>\n");
	scanf("%d", &(pc->data[pc->con_sz].age));
	printf("��������ϵ���Ա�>\n");
	scanf("%s", pc->data[pc->con_sz].sex);
	printf("��������ϵ�˵绰�ţ�>\n");
	scanf("%s", pc->data[pc->con_sz].tele);
	printf("��������ϵ�˵�ַ��>\n");
	scanf("%s", pc->data[pc->con_sz].add);
	pc->con_sz++;
	printf("��ϵ����ӳɹ�\n");
}

void ShowContact(const Contact* pc)//��ʾͨѶ¼��������ϵ��
{
	printf("%-20s\t%-4s\t%-5s\t%-11s\t%-30s\n", "����", "����", "�Ա�", "�绰��", "��ַ");
	for (int i = 0; i < pc->con_sz; i++)
	{
		printf("%-20s\t%-4d\t%-5s\t%-11s\t%-30s\n", pc->data[i].name,
			pc->data[i].age,
			pc->data[i].sex,
			pc->data[i].tele,
			pc->data[i].add);
	}
}

int find_name(const Contact* pc,char* fd_name)//�����ֲ���
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
void DelContact(Contact* pc)//ɾ��ͨѶ¼��ָ����������ϵ��
{
	if (pc->con_sz == 0)
	{
		printf("ͨѶ¼Ϊ�գ��޷�ɾ��\n");
	}
	char name[20];
	printf("��ѡ��Ҫɾ����ϵ�˵�����:>\n");
	scanf("%s", &name);
	int dd = find_name(pc, name);
	if (dd == -1)
	{
		printf("ͨѶ¼��û�и���ϵ��\n");
	}
	else
	{
		for (int i = dd; i < pc->con_sz-1; i++)
		{
			//memmove(pc.data[i + 1], pc->data[i], sizeof(pc->data) * (pc->con_sz - dd));
			pc->data[i] = pc->data[i + 1];
		}
		pc->con_sz--;
		printf("ɾ������ϵ�˳ɹ�\n");
	}
}

void SearchContact(const Contact* pc)//������ϵ��
{
	char name[Peo_name];
	printf("������Ҫ���ҵ���ϵ������:>\n");
	scanf("%s", name);
	int dd = find_name(pc, name);
	if (dd == -1)
	{
		printf("ͨѶ¼��δ���ҵ�����\n");
	}
	else
	{
		printf("�Ѳ��ҵ�����ϵ�ˣ�\n");
		printf("%-20s\t%-4s\t%-5s\t%-11s\t%-30s\n", "����", "����", "�Ա�", "�绰��", "��ַ");
		printf("%-20s\t%-4d\t%-5s\t%-11s\t%-30s\n", pc->data[dd].name,
			pc->data[dd].age,
			pc->data[dd].sex,
			pc->data[dd].tele,
			pc->data[dd].add);
	}
}
void Sort_action_name(Contact* pc, int i)//����������������
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
	printf("�������\n");
}
Sort_action_age(Contact* pc, int sort)
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
	printf("�������\n");
}

void SortContact(Contact* pc)//����
{
	printf("��ѡ�����򷽷�:>\n");
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
		printf("ѡ���������ʧ��\n");
	}
}

void ModfiyContact(Contact* pc)//�޸���ϵ����Ϣ
{
	char fd_name[20];
	printf("������Ҫ�޸���ϵ������:>\n");
	scanf("%s", fd_name);
	int ret = find_name(pc, fd_name);
	if (ret == -1)
	{
		printf("ͨѶ¼��û�д��ˣ��޷��޸�\n");
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
		printf("������Ҫ�޸���Ϣ��\n");
		scanf("%d", &input);
		switch (input)
		{
		case name:
			printf("��������ϵ��������>\n");
			scanf("%s", pc->data[ret].name);
			break;
		case age:
			printf("��������ϵ�����䣺>\n");
			scanf("%d", &(pc->data[ret].age));
			break;
		case sex:
			printf("��������ϵ���Ա�>\n");
			scanf("%s", pc->data[ret].sex);
			break;
		case tele:
			printf("��������ϵ�˵绰�ţ�>\n");
			scanf("%s", pc->data[ret].tele);
			break;
		case add:
			printf("��������ϵ�˵�ַ��>\n");
			scanf("%s", pc->data[ret].add);
			break;
		}
	}
}