#ifndef  student_H
#define student_H
#include<iostream>
using namespace std;
// #define NULL 0;
struct student
{
	//structĬ�ϵ���public���ͣ���classĬ�ϵ���private���ͣ�

	long num;
	float score;         //c�в���,c++������ڽṹ���ڶ��庯��,�÷���class��������һ��
	student *next;
	student *creat();
	void print(student *head);
	student *del(student *head, long num);
	student *insert(student *head, student *stu);

};
extern int n;   //����ͷ�ļ��е�ȫ�ֱ�������.cppʵ���ļ��б�����ʱ---ͷ�ļ�������ӹؼ���extern,.cpp�ļ������¶���(����ؼ���)
               //���������е�Ԫ�ظ���n����������ԣ���������Ԫ��student�����ԣ����Բ��ܷ���student�Ľṹ���ڣ�
#endif

