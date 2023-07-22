#include"d_Contact.h"
int find_name(Contact* pc, const char* name);
int find_age(Contact* pc, const char* age);
int find_tele(Contact* pc, const char* tele);
int find_addr(Contact* pc, const char* addr);

//��ȡͨѶ¼
void LoadContact(Contact* pc)
{
	FILE* pf = (Peoinfo*)fopen("contact.dat", "rb");
	if (pf == NULL)
	{
		ferror("LoadContact");
		return;
	}
	//���ļ�
	Peoinfo tmp = { 0 };
	while (fread(&tmp, sizeof(Peoinfo), 1, pf))
	{
		if (checkContact(pc) == 1)
			return;
		pc->data[pc->con_sz] = tmp;
		pc->con_sz++;
	}

	//�ر��ļ�
	fclose(pf);
	pf = NULL;
}

//��̬��ʼ��ͨѶ¼
void InitContact(Contact* pc)
{
	assert(pc);
	pc->data =(Peoinfo*) calloc(con_num, sizeof(Peoinfo));
	if (pc == NULL)
	{
		printf("��ʼ��ͨѶ¼ʧ��!\n");
		return;
	}
	pc->con_sz = 0;
	pc->cap = con_num;
	LoadContact(pc);
}


//����
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
			printf("���ݳɹ�\n");
			return 0;
		}
	}
}
//��̬��ʼ��ͨѶ¼
//void InitContact(Contact* pc)
//{
//	memset(pc, 0, sizeof(pc->data));
//	pc->con_sz = 0;
//}

//�����ϵ��
void AddContact(Contact* pc)
{
	assert(pc);
	if (pc->con_sz >= con_num)
	{
		checkContact(pc);
	}
	printf("������������>\n");
	scanf("%s", pc->data[pc->con_sz].name);
	printf("���������䣺>\n");
	scanf("%d", &(pc->data[pc->con_sz].age));
	printf("�������Ա�>\n");
	scanf("%s", pc->data[pc->con_sz].sex);
	printf("������绰�ţ�>\n");
	scanf("%s", pc->data[pc->con_sz].tele);
	printf("�������ַ��>\n");
	scanf("%s", pc->data[pc->con_sz].addr);
	pc->con_sz++;
	printf("��ϵ����ӳɹ�\n");
}

//����������,���ҷ��ظ���ϵ���±�
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

//���������,���ҷ��ظ���ϵ���±�
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

//���绰�Ų���,���ҷ��ظ���ϵ���±�
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

//����ַ����,���ҷ��ظ���ϵ���±�
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
//ɾ����ϵ��
void DelContact(Contact* pc)
{
	if (pc->con_sz == 0)
	{
		printf("ͨѶ¼Ϊ�գ��޷�ɾ��!\n");
		return;
	}
	char name[20];
	printf("��������Ҫɾ����ϵ�˵�����:>\n");
	scanf("%s", name);
	int flag = -1;
	flag = find_name(pc, name);
	if (flag == -1)
	{
		printf("δ�ҵ�����ϵ��\n");
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
	printf("ɾ���ɹ�!");
}

//��ʾͨѶ¼ȫ����ϵ��
void ShowContact(Contact* pc)
{
	printf("%-20s\t%-3s\t%-5s\t%-12s\t%-30s\n", "����", "����", "�Ա�", "�绰", "��ַ");
	if (pc->con_sz == 0)
	{
		printf("ͨѶ¼Ϊ��\n");
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

//������ϵ��
void SeatchContact(Contact* pc)
{
	assert(pc);
	if (pc->con_sz == 0)
	{
		printf("ͨѶ¼Ϊ�գ��޷�����!\n");
		return;
	}
	int search = 0;
	char name[20];
	int age;
	char tele[12];
	char addr[30];
	int flag = -1;
	printf("������Ҫ���ҵķ�ʽ:>\n");
	printf("1.name 2.age 3.tele 4.addr\n");
	scanf("%d", &search);
	switch (search)
	{
	case 1:
		printf("����������:>\n");
		scanf("%s", name);
		flag = find_name(pc, name);
		break;
	case 2:
		printf("����������:>\n");
		scanf("%d", &age);
		flag = find_age(pc, age);
		break;
	case 3:
		printf("������绰��:>\n");
		scanf("%s", tele);
		flag = find_tele(pc, tele);
		break;
	case 4:
		printf("�������ַ:>\n");
		scanf("%s", addr);
		flag = find_addr(pc, addr);
		break;
	default:
		printf("û�иò��ҷ�ʽ:\n");
		break;
	}
	if (flag != -1)
	{
		printf("%-20s\t%-3s\t%-5s\t%-12s\t%-30s\n", "����", "����", "�Ա�", "�绰", "��ַ");
		printf("%-20s\t%-3d\t%-5s\t%-12s\t%-30s\n", pc->data[flag].name
			, pc->data[flag].age
			, pc->data[flag].sex
			, pc->data[flag].tele
			, pc->data[flag].addr);
	}
}

//�޸���ϵ����Ϣ
void ModifyContact(Contact* pc)
{
	char name[20];
	printf("������Ҫ�޸ĵ���ϵ�˵�����:>\n");
	scanf("%s", name);
	int flag = -1;
	int input = 0;
	flag = find_name(pc, name);
	if (flag != -1)
	{
		printf("������Ҫ�޸ĵ�����:>");
		printf("1.name 2.age 3.sex 4.tele 5.addr");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("������Ҫ�޸ĵ�����:\n");
			scanf("%s", pc->data[flag].name);
			break;
		case 2:
			printf("������Ҫ�޸ĵ�����:\n");
			scanf("%d", &(pc->data[flag].age));
			break;
		case 3:
			printf("������Ҫ�޸ĵ��Ա�:\n");
			scanf("%s", pc->data[flag].sex);
			break;
		case 4:
			printf("������Ҫ�޸ĵĵ绰��:\n");
			scanf("%s", pc->data[flag].tele);
			break;
		case 5:
			printf("������Ҫ�޸ĵĵ�ַ:\n");
			scanf("%s", pc->data[flag].addr);
			break;
		default:
			printf("û�и�ѡ��!\n");
		}
	}
	printf("�޸ĳɹ�!\n");
}


q_name(const void* p1,const void* p2)
{
	return strcmp(((Peoinfo*)p1)->name ,((Peoinfo*)p2)->name);
}
q_age(const void* p1, const void* p2)
{
	return ((Peoinfo*)p1)->age - ((Peoinfo*)p2)->age;
}
//����ϵ�˽�������
void SortContact(Contact* pc)
{
	int input = 0;
	printf("��ѡ������ʽ:\n");
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

//����ͨѶ¼
void DestroyContact(Contact* pc)
{
	free(pc->data);
	pc->data = NULL;
	pc->cap = 0;
	pc->con_sz = 0;
}

void SaveContact(Contact* pc)//����ͨѶ¼
{
	FILE* pf = fopen("contact.dat", "wb");
	if (pf == NULL)
	{
		perror("SaveContact");
		return;
	}

	//д����
	for (int i = 0; i < pc->con_sz; i++)
	{
		fwrite(pc->data + i, sizeof(Peoinfo), 1, pf);
	}

	//�ر��ļ�
	fclose(pf);
	pf == NULL;
}