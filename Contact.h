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

typedef struct Peoinfo//��ϵ����Ϣ
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

typedef struct Contact//ͨѶ¼
{
	Peoinfo data[con_num];//��ϵ������
	int con_sz;//��ϵ�˸���
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
void Init_con(Contact* pc);//��ʼ��ͨѶ¼

void AddConcact(Contact* pc);//������ϵ��

void ShowContact(const Contact* pc);//��ʾͨѶ¼��������ϵ��

void DelContact(Contact* pc);//ɾ��ͨѶ¼�����е�ĳ��Ԫ��

void SearchContact(const Contact* pc);//������ϵ��

void SortContact(Contact* pc);//����

void ModfiyContact(Contact* con);//�޸���ϵ����Ϣ