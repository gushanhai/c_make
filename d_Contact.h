#pragma once
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<stdlib.h>

#define con_num 5
#define con_num_add 2

//联系人信息
typedef struct Peoinfo
{
	char name[20];
	int age;
	char sex[5];
	char tele[12];
	char addr[30];
}Peoinfo;

typedef enum Option
{
	Exit,
	Add,
	Del,
	Search,
	Modify,
	Show,
	Sort
}Option;


//通讯录列表
typedef struct Contact
{
	Peoinfo* data;
	int con_sz;
	int cap;
}Contact;

//通讯录列表
//typedef struct Contact
//{
//	Peoinfo data[con_num];
//	int con_sz;
//}Contact;

//初始化通讯录
void InitContact(Contact* pc);

//添加联系人
void AddContact(Contact* pc);

//删除联系人
void DelContact(Contact* pc);

//显示通讯录全部联系人
void ShowContact(Contact* pc);

//查找联系人
void SeatchContact(Contact* pc);

//修改联系人信息
void ModifyContact(Contact* pc);

//对联系人进行排序
void SortContact(Contact* pc);