#include"Contact.h"
void menu()
{
	printf("###################################\n");
	printf("####   1.add         2.del     ####\n");
	printf("####   3.search      4.modify  ####\n");
	printf("####   5.show        6.sort    ####\n");
	printf("###################################\n");

}
void test()
{
	menu();
	int input = 0;
	Contact con;
	Init_con(&con);//初始化通讯录
	do
	{
		printf("请选择:>\n");
		scanf("%d", &input);
		switch (input)
		{
		case Add://增加联系人
			AddConcact(&con);
			break;
		case Del://删除联系人
			DelContact(&con);
			break;
		case Search://查找联系人
			SearchContact(&con);
			break;
		case Modfiy://修改联系人信息
			ModfiyContact(&con);
			break;
		case Show://显示联系人信息
			ShowContact(&con);
			break;
		case Sort://排序联系人信息
			SortContact(&con);
			break;
		case Exit:
			break;
		default:
			printf("输入错误，请重新");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}