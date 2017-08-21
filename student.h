#ifndef  student_H
#define student_H
#include<iostream>
using namespace std;
// #define NULL 0;
struct student
{
	//struct默认的是public类型，而class默认的是private类型；

	long num;
	float score;         //c中不能,c++里可以在结构体内定义函数,用法和class定义类是一样
	student *next;
	student *creat();
	void print(student *head);
	student *del(student *head, long num);
	student *insert(student *head, student *stu);

};
extern int n;   //对于头文件中的全局变量，在.cpp实现文件中被调用时---头文件定义需加关键字extern,.cpp文件中重新定义(不需关键字)
               //对于链表中的元素个数n是链表的属性，并非链表元素student的属性，所以不能放在student的结构体内；
#endif

