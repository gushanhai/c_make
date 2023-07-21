#pragma once
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<stdlib.h>

#define con_num 5
#define con_num_add 2

//��ϵ����Ϣ
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


//ͨѶ¼�б�
typedef struct Contact
{
	Peoinfo* data;
	int con_sz;
	int cap;
}Contact;

//ͨѶ¼�б�
//typedef struct Contact
//{
//	Peoinfo data[con_num];
//	int con_sz;
//}Contact;

//��ʼ��ͨѶ¼
void InitContact(Contact* pc);

//�����ϵ��
void AddContact(Contact* pc);

//ɾ����ϵ��
void DelContact(Contact* pc);

//��ʾͨѶ¼ȫ����ϵ��
void ShowContact(Contact* pc);

//������ϵ��
void SeatchContact(Contact* pc);

//�޸���ϵ����Ϣ
void ModifyContact(Contact* pc);

//����ϵ�˽�������
void SortContact(Contact* pc);