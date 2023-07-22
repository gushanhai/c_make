#include"d_Contact.h"
void menu()
{
	printf("###############################\n");
	printf("####  1.add        2.del   ####\n");
	printf("####  3.search     4.modify####\n");
	printf("####  5.show       6.sort  ####\n");
	printf("####  0.exit               ####\n");
	printf("###############################\n");

}
void test()
{
	int input;
	Contact con;
	InitContact(&con);
	do
	{
		menu();
		printf("ÇëÑ¡Ôñ:>\n");
		scanf("%d", &input);
		switch (input)
		{
		case Add:
			AddContact(&con);
			break;
		case Del:
			DelContact(&con);
			break;
		case Search:
			SeatchContact(&con);
			break;
		case Modify:
			ModifyContact(&con);
			break;
		case Show:
			ShowContact(&con);
			break;
		case Sort:
			SortContact(&con);
			break;
		case Exit:
			SaveContact(&con);
			DestroyContact(&con);
			break;
		default:
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}