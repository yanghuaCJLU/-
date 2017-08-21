#include<iostream>
using namespace std;

struct Student   //创建结构体数据，同实现链表数据结构；
{
	int num;
	float  score;
	Student *next;
};

int main(){

	Student stu1, stu2, stu3, *head, *p;   //静态链表就是有多少个节点，就需要先开辟/初始化多少个对象，然后在通过next属性链接成链表；
	stu1.num = 101;                  
	stu1.score = 76;      //动态链表则是只需开辟三个指针，一个指向头，一个指向末节点，一个指向未节点指向的下一个地址（为新创建节点准备）

	stu2.num = 102;
	stu2.score = 98;  

	stu3.num = 103;
	stu3.score = 100;

	head = &stu1;  //将链表头赋给stu1
	stu1.next = &stu2;
	stu2.next = &stu3;
	stu3.next = NULL; //未节点的下一地址赋空，链表结束；

	p = head;  //初始化P指针，后面循环调用；避免head指针后移（不符合链表用法）

	do
	{
		static int i = 1;  //i只能为静态变量或者在do外面初始化；
		cout << "链表节点"<<i<<"的学号:" << p->num << "  分数：" << p->score << endl;
		p = p->next; i++;
	} while (p != NULL);


	system("pause");
	return 0;
}