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
	Init_con(&con);//��ʼ��ͨѶ¼
	do
	{
		printf("��ѡ��:>\n");
		scanf("%d", &input);
		switch (input)
		{
		case Add://������ϵ��
			AddConcact(&con);
			break;
		case Del://ɾ����ϵ��
			DelContact(&con);
			break;
		case Search://������ϵ��
			SearchContact(&con);
			break;
		case Modfiy://�޸���ϵ����Ϣ
			ModfiyContact(&con);
			break;
		case Show://��ʾ��ϵ����Ϣ
			ShowContact(&con);
			break;
		case Sort://������ϵ����Ϣ
			SortContact(&con);
			break;
		case Exit:
			break;
		default:
			printf("�������������");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}