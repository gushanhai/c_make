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
void kaih()//开户
{
	printf("请输入您的姓名:\n");
	scanf("%s", name);
	int a = 0;
	printf("请输入密码(1.自己输入2.随机生成):\n");
	scanf("%d", &w);
	pass();
	for (int i = 0; i < 16; i++)//设置卡号
	{
		int e = rand() % 10;
		card[i] = e;
	}
	printf("您已开户成功，您的卡号为：\n");
	for (int i = 0; i < 16; i++)
	{
		printf("%d",card[i]);
	}
	printf("\n");
}
void zz()//转账
{
	char zzzh2[16];
	int a;
	int d = 3;
	printf("请输入转账对象账户:\n");
	scanf("%s", &zzzh1);
	printf("请确认卡号:\n");
	scanf("%s", &zzzh2);
	a:
	if (strcmp(zzzh1, zzzh2) == 0)
	{
		printf("请输入转账金额:\n");
		scanf("%d", &a);
		if (a > money)
		{
			printf("您的账户余额不足，请重新进行转账!\n");
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
		printf("两次输入有差别，请重新输入!\n");
		goto a;
	}
	menu();
}
void et()//退出
{
	printf("退出系统，感谢您的使用!\n");
	exit(0);
}
void g_pass()//修改密码
{
	int arr3[6], arr4[6];
	int x = 0;
	printf("请修改密码:\n");
	for (int i = 0; i < 6; i++)
	{
		scanf("%d", &arr3[i]);
	}
	printf("请确定密码：\n");
	for (int i = 0; i < 6; i++)
	{
		scanf("%d", &arr4[i]);
	}
	for (int i = 0; i < 6; i++)
	{
		if (arr3[i] == arr4[i])
		{
			x++;//如果数组3和数组4第i个元素相同，则x++；
		}
	}
	if (x == 6)
	{
		printf("密码修改成功\n");
		for (int i = 0; i < 6; i++)
		{
			arr1[i] = arr3[i];
		}
	}
	else
	{
		printf("第一次和第二次密码不相同，请重新输入!\n");
		g_pass();
	}
	menu();
}
void cunk()//存款;
{
	int c = 0;
	printf("请输入存款金额(整数):\n");
	scanf("%d", &c);
	money += c;
	printf("%d元，您的账户余额为：%d元\n", c, money);
	int d = 2;
	pinzheng(c, d);
	menu();
}
int pinzheng(int x, int d)//打印凭证
{
	int p = 0;
	time_t t;
	time(&t);
	printf("打印凭证输入1，不打印输入其他数字:\n");
	scanf("%d", &p);
	if (p == 1)
	{
		if (d == 1)
		{
			printf("您在%s成功取款 % d元，您的账户余额为： % d元\n",ctime(&t), x, money );
		}
		else if (d == 2)
		{
			printf("您在%s成功存款%d元，您的账户余额为：%d元\n",ctime(&t), x, money);
		}
		else if (d == 3)
		{
			printf("您在%s成功向%d账户转账%d元，您的账户余额为: %d元\n",ctime(&t), & zzzh1, x, money );
		}
	}
}
void k_quk()//快速取款
{
	int d = 1;//d=1取款，d=2代表存款
a:
	printf("取款金额为(元)：1.100 2.200 3.500 4.1000 5.2000\n");
	printf("请选择:\n");
	int x = 0;//快速取款的几种模式
	int c = 0;//金额
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
		printf("输入错误，请重新选择:\n");
		goto a;
	}
	menu();
}
void qukuan()//取款
{
	int q_money = 0;
	int x = 0;
a:
	printf("请输入取款金额:\n");
	scanf("%d", &q_money);//输入取款的余额
	if (q_money <= money)
	{
		money -= q_money;
		printf("成功取款%d元，您的账户余额为：%d元,请您取走您的现金\n", q_money, money);
		pinzheng(q_money, 1);
	}
	else
	{
		printf("您账户的余额不足!是否重新输入存款金额:(1.重新输入0.退出)\n");
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
void selectmoney()//查询账户余额
{
	printf("您的账户余额为:%d元\n", money);
	menu();
}
int x_menu(int a)//进行业务选择
{
	switch (select)
	{
	case 1:
		printf("您已进入查询余额业务\n");
		selectmoney();
		break;
	case 2:
		printf("您已进入取款业务\n");
		qukuan();
		break;
	case 3:
		printf("您已进入快速取款业务\n");
		k_quk();
		break;
	case 4:
		printf("您已进入存款业务\n");
		cunk();
		break;
	case 5:
		printf("您已进入修改密码业务\n");
		g_pass();
		break;
	case 6:
		printf("转账");
		zz();
		break;
	case 0:
		et();
		break;
	}
}
 int menu()//显示可选择的业务
{
	printf("#############欢迎您进入银行系统###############\n");
	printf("#############请选择您需要的服务###############\n");
	printf("#################1--查询余额##################\n");
	printf("#################2--取    款##################\n");
	printf("#################3--快速取款##################\n");
	printf("#################4--存    款##################\n");
	printf("#################5--修改密码##################\n");
	printf("#################6--转    账##################\n");
	printf("#################0--退    出##################\n");
	printf("----------------------------------------------\n");
	printf("##############################################\n");
a:
	printf("请选择您要办理的业务:\n");
	scanf("%d", &select);
	if (select < 7 || select >= 0)
	{
		x_menu(select);
	}
	else
	{
		printf("输入错误，请重新选择:\n");
		goto a;
	}
}
void welcome()//欢迎菜单
{
	int c = 0;
	int a = 0;
	printf("##############################################\n");
	printf("#################ATM自动取系统################\n");
	printf("##############################################\n");
	printf("########请插入您的磁卡（按任意键完成）########\n");
	printf("########1.有卡                  2.无卡########\n");
	getchar();
	printf("请输入:\n");
	scanf("%d", &a);
	if (a == 1)
	{
		printf("正在读卡，请稍后\n");
		pass();
	}
	else if(a == 2)
	{
		 printf("是否进行开户:(1.是2.否):\n");
		 scanf("%d", &c);
		 if (c == 1)
		 {
			 kaih();
		 }
		 else
		 {
			 printf("请重新选择!\n");
			 welcome();
		 }
	}
}
int pass()//进行输入密码并且进行判断密码
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
		printf("请输入密码:\n");
		for (i = 0; i < 6; i++)
		{
			int t = scanf("%d",&o);
			password[i] = t;
			printf("%d", password[i]);
			arr1[i] = password[i];
		}
	}
	printf("请输入登录密码:");
	printf("\n");
	while (1)
	{
		int x = 0;//判断两个字符串是否相等
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
			printf("密码输入正确，您已成功登录ATM系统，欢迎您！\n");
			break;
		}
		else
		{
			c++;
			printf("密码输入错误，请重新输入!(%d/3)\n", c);
			if (c == 3)
			{
				printf("您的账户已锁定，请前往柜台进行解锁!\n");
				et();
			}
		}
	}
}
int main()
{
	srand((unsigned)time(NULL));
	welcome();//欢迎函数
	do
	{
		menu();//显示菜单
	} while (1);
	return 0;
}