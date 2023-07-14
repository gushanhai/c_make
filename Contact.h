#pragma once
#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>

#define con_num 100
#define Peo_name 20
#define Peo_sex 5
#define Peo_tele 12
#define Peo_add 30

typedef struct Peoinfo//联系人信息
{
	char name[Peo_name];
	int age;
	char sex[Peo_sex];
	char tele[Peo_tele];
	char add[Peo_add];
}Peoinfo;

typedef enum SORT
{

	name = 1,
	age,
	sex,
	tele,
	add
}SORT;

typedef struct Contact//通讯录
{
	Peoinfo data[con_num];//联系人数组
	int con_sz;//联系人个数
}Contact;

typedef enum Option
{
	Exit,
	Add,
	Del,
	Search,
	Modfiy,
	Show,
	Sort
}Option;
void Init_con(Contact* pc);//初始化通讯录

void AddConcact(Contact* pc);//增加联系人

void ShowContact(const Contact* pc);//显示通讯录中所有联系人

void DelContact(Contact* pc);//删除通讯录数组中的某个元素

void SearchContact(const Contact* pc);//查找联系人

void SortContact(Contact* pc);//排序

void ModfiyContact(Contact* con);//修改联系人信息