#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
#include<stdio.h>
#include<string.h>
#include<time.h>
#include<stdlib.h>
int money = 10000;
int arr1[6];
int select = 0;
char name[10];
int password[6];
int card[16];
int w = 2;
static char zzzh1[16];
void kaih()//����
{
	printf("��������������:\n");
	scanf("%s", name);
	int a = 0;
	printf("����������(1.�Լ�����2.�������):\n");
	scanf("%d", &w);
	pass();
	for (int i = 0; i < 16; i++)//���ÿ���
	{
		int e = rand() % 10;
		card[i] = e;
	}
	printf("���ѿ����ɹ������Ŀ���Ϊ��\n");
	for (int i = 0; i < 16; i++)
	{
		printf("%d",card[i]);
	}
	printf("\n");
}
void zz()//ת��
{
	char zzzh2[16];
	int a;
	int d = 3;
	printf("������ת�˶����˻�:\n");
	scanf("%s", &zzzh1);
	printf("��ȷ�Ͽ���:\n");
	scanf("%s", &zzzh2);
	a:
	if (strcmp(zzzh1, zzzh2) == 0)
	{
		printf("������ת�˽��:\n");
		scanf("%d", &a);
		if (a > money)
		{
			printf("�����˻����㣬�����½���ת��!\n");
			goto a;
		}
		else if (a >= 0)
		{
			money -= a;
			pinzheng(a, d);
			menu();
		}
	}
	else
	{
		printf("���������в������������!\n");
		goto a;
	}
	menu();
}
void et()//�˳�
{
	printf("�˳�ϵͳ����л����ʹ��!\n");
	exit(0);
}
void g_pass()//�޸�����
{
	int arr3[6], arr4[6];
	int x = 0;
	printf("���޸�����:\n");
	for (int i = 0; i < 6; i++)
	{
		scanf("%d", &arr3[i]);
	}
	printf("��ȷ�����룺\n");
	for (int i = 0; i < 6; i++)
	{
		scanf("%d", &arr4[i]);
	}
	for (int i = 0; i < 6; i++)
	{
		if (arr3[i] == arr4[i])
		{
			x++;//�������3������4��i��Ԫ����ͬ����x++��
		}
	}
	if (x == 6)
	{
		printf("�����޸ĳɹ�\n");
		for (int i = 0; i < 6; i++)
		{
			arr1[i] = arr3[i];
		}
	}
	else
	{
		printf("��һ�κ͵ڶ������벻��ͬ������������!\n");
		g_pass();
	}
	menu();
}
void cunk()//���;
{
	int c = 0;
	printf("����������(����):\n");
	scanf("%d", &c);
	money += c;
	printf("%dԪ�������˻����Ϊ��%dԪ\n", c, money);
	int d = 2;
	pinzheng(c, d);
	menu();
}
int pinzheng(int x, int d)//��ӡƾ֤
{
	int p = 0;
	time_t t;
	time(&t);
	printf("��ӡƾ֤����1������ӡ������������:\n");
	scanf("%d", &p);
	if (p == 1)
	{
		if (d == 1)
		{
			printf("����%s�ɹ�ȡ�� % dԪ�������˻����Ϊ�� % dԪ\n",ctime(&t), x, money );
		}
		else if (d == 2)
		{
			printf("����%s�ɹ����%dԪ�������˻����Ϊ��%dԪ\n",ctime(&t), x, money);
		}
		else if (d == 3)
		{
			printf("����%s�ɹ���%d�˻�ת��%dԪ�������˻����Ϊ: %dԪ\n",ctime(&t), & zzzh1, x, money );
		}
	}
}
void k_quk()//����ȡ��
{
	int d = 1;//d=1ȡ�d=2������
a:
	printf("ȡ����Ϊ(Ԫ)��1.100 2.200 3.500 4.1000 5.2000\n");
	printf("��ѡ��:\n");
	int x = 0;//����ȡ��ļ���ģʽ
	int c = 0;//���
	scanf("%d", &x);
	switch (x)
	{
	case 1:
		c = 100;
		money -= c;
		pinzheng(c, d);
		break;
	case 2:
		c = 200;
		money -= c;
		pinzheng(c, d);
		break;
	case 3:
		c = 500;
		money -= c;
		pinzheng(c, d);
		break;
	case 4:
		c = 1000;
		money -= c;
		pinzheng(c, d);
		break;
	case 5:
		c = 2000;
		money -= c;
		pinzheng(c, d);
		break;
	default:
		printf("�������������ѡ��:\n");
		goto a;
	}
	menu();
}
void qukuan()//ȡ��
{
	int q_money = 0;
	int x = 0;
a:
	printf("������ȡ����:\n");
	scanf("%d", &q_money);//����ȡ������
	if (q_money <= money)
	{
		money -= q_money;
		printf("�ɹ�ȡ��%dԪ�������˻����Ϊ��%dԪ,����ȡ�������ֽ�\n", q_money, money);
		pinzheng(q_money, 1);
	}
	else
	{
		printf("���˻�������!�Ƿ�������������:(1.��������0.�˳�)\n");
		scanf("%d", &x);
		if (x == 1)
		{
			goto a;
		}
		else
		{
			menu();
		}
	}
}
void selectmoney()//��ѯ�˻����
{
	printf("�����˻����Ϊ:%dԪ\n", money);
	menu();
}
int x_menu(int a)//����ҵ��ѡ��
{
	switch (select)
	{
	case 1:
		printf("���ѽ����ѯ���ҵ��\n");
		selectmoney();
		break;
	case 2:
		printf("���ѽ���ȡ��ҵ��\n");
		qukuan();
		break;
	case 3:
		printf("���ѽ������ȡ��ҵ��\n");
		k_quk();
		break;
	case 4:
		printf("���ѽ�����ҵ��\n");
		cunk();
		break;
	case 5:
		printf("���ѽ����޸�����ҵ��\n");
		g_pass();
		break;
	case 6:
		printf("ת��");
		zz();
		break;
	case 0:
		et();
		break;
	}
}
 int menu()//��ʾ��ѡ���ҵ��
{
	printf("#############��ӭ����������ϵͳ###############\n");
	printf("#############��ѡ������Ҫ�ķ���###############\n");
	printf("#################1--��ѯ���##################\n");
	printf("#################2--ȡ    ��##################\n");
	printf("#################3--����ȡ��##################\n");
	printf("#################4--��    ��##################\n");
	printf("#################5--�޸�����##################\n");
	printf("#################6--ת    ��##################\n");
	printf("#################0--��    ��##################\n");
	printf("----------------------------------------------\n");
	printf("##############################################\n");
a:
	printf("��ѡ����Ҫ�����ҵ��:\n");
	scanf("%d", &select);
	if (select < 7 || select >= 0)
	{
		x_menu(select);
	}
	else
	{
		printf("�������������ѡ��:\n");
		goto a;
	}
}
void welcome()//��ӭ�˵�
{
	int c = 0;
	int a = 0;
	printf("##############################################\n");
	printf("#################ATM�Զ�ȡϵͳ################\n");
	printf("##############################################\n");
	printf("########��������Ĵſ������������ɣ�########\n");
	printf("########1.�п�                  2.�޿�########\n");
	getchar();
	printf("������:\n");
	scanf("%d", &a);
	if (a == 1)
	{
		printf("���ڶ��������Ժ�\n");
		pass();
	}
	else if(a == 2)
	{
		 printf("�Ƿ���п���:(1.��2.��):\n");
		 scanf("%d", &c);
		 if (c == 1)
		 {
			 kaih();
		 }
		 else
		 {
			 printf("������ѡ��!\n");
			 welcome();
		 }
	}
}
int pass()//�����������벢�ҽ����ж�����
{
	static int arr2[6];
	int i = 0;
	int o = 0;
	int c = 0;
	if (w == 2)
	{
		for (i = 0; i < 6; i++)
		{
			int pass = rand() % 10;
			password[i] = pass;
			printf("%d", password[i]);
			arr1[i]=password[i];
		}
		printf("\n");
	}
	else if(w==1)
	{
		printf("����������:\n");
		for (i = 0; i < 6; i++)
		{
			int t = scanf("%d",&o);
			password[i] = t;
			printf("%d", password[i]);
			arr1[i] = password[i];
		}
	}
	printf("�������¼����:");
	printf("\n");
	while (1)
	{
		int x = 0;//�ж������ַ����Ƿ����
		for (i = 0; i < 6; i++)
		{
			scanf("%d", &arr2[i]);
		}
		for (int j = 0; j < 6; j++)
		{
			if (arr1[j] == arr2[j])
			{
				x++;
			}
		}
		if (x == 6)
		{
			printf("����������ȷ�����ѳɹ���¼ATMϵͳ����ӭ����\n");
			break;
		}
		else
		{
			c++;
			printf("���������������������!(%d/3)\n", c);
			if (c == 3)
			{
				printf("�����˻�����������ǰ����̨���н���!\n");
				et();
			}
		}
	}
}
int main()
{
	srand((unsigned)time(NULL));
	welcome();//��ӭ����
	do
	{
		menu();//��ʾ�˵�
	} while (1);
	return 0;
}