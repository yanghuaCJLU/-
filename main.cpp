#include<iostream>
using namespace std;

struct Student   //�����ṹ�����ݣ�ͬʵ���������ݽṹ��
{
	int num;
	float  score;
	Student *next;
};

int main(){

	Student stu1, stu2, stu3, *head, *p;   //��̬��������ж��ٸ��ڵ㣬����Ҫ�ȿ���/��ʼ�����ٸ�����Ȼ����ͨ��next�������ӳ�����
	stu1.num = 101;                  
	stu1.score = 76;      //��̬��������ֻ�迪������ָ�룬һ��ָ��ͷ��һ��ָ��ĩ�ڵ㣬һ��ָ��δ�ڵ�ָ�����һ����ַ��Ϊ�´����ڵ�׼����

	stu2.num = 102;
	stu2.score = 98;  

	stu3.num = 103;
	stu3.score = 100;

	head = &stu1;  //������ͷ����stu1
	stu1.next = &stu2;
	stu2.next = &stu3;
	stu3.next = NULL; //δ�ڵ����һ��ַ���գ����������

	p = head;  //��ʼ��Pָ�룬����ѭ�����ã�����headָ����ƣ������������÷���

	do
	{
		static int i = 1;  //iֻ��Ϊ��̬����������do�����ʼ����
		cout << "����ڵ�"<<i<<"��ѧ��:" << p->num << "  ������" << p->score << endl;
		p = p->next; i++;
	} while (p != NULL);


	system("pause");
	return 0;
}