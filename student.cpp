#include"student.h"

int n;
student  *creat()
{
	student *head;
	student *p1, *p2;
	n = 0;
	p1 = p2 = new student;
	cin >> p1->num >> (*p1).score;   //����ָ����������ֵ��÷�ʽ  p1->��(*p.);
	head = NULL;                       //���ڶ����������ͨ��ָ�룬�����ڶ��������ڴ棻����ֱ�Ӷ������������ջ�п����ڴ棻
	while (p1->num != 0)
	{
		n = n + 1;
		if (n == 1){ head = p1; }
		else p2->next = p1;
		p2 = p1;
		p1 = new student;
		cin >> p1->num >> p1->score;

	}
	p2->next = NULL;    //��ʼ��ֻ�洢�����ڵ㣬�����ڼ�����ӣ���˹ؼ���Ҫȷ������ͷ��
	return(head);
}

void print(student *head){
	student *p;
	cout << endl << "Now,��these" << n << "records are:" << endl;
	p = head;
	if (head !=NULL)
	
		do{
			cout << p->num << " " << p->score << endl;
			p = p->next;
		} while (p != NULL);
	}

student *del(student *head, long num)
{
	student *p1, *p2=NULL;
	if (head == NULL)
	{
		cout << "list NULL" << endl; return (head);
	}
	p1 = head;
	while (num != p1->num&&p1->next != NULL)
	{
		p2 = p1;
		p1 = p1->next;

	}
	if (num == p1->num)
	{
		if (p1 == head) head = p1->next;
		else p2->next = p1->next;
		cout << "delete:" << num << endl;
		n = n - 1;
	}

	else cout << "cannot find" << num;
	return(head);
}

student *insert(student *head, student *stu){
	student *p0,*p1, *p2;
	p1 = head;
	p0 = stu;
	if (head == NULL)
	{
		head = p0; p0->next = NULL;
	}
	else
	{
		while ((p0->num > p1->num) && (p1->next != NULL))
		{
			p2 = p1;
			p1 = p1->next;
			if (p0->num <= p1->num)
			{
				if (head == p1)head = p0;
				else p2->next = p0;
				p0->next = p1;
			}
			else { p1->next = p0; p0->next = NULL; }
			}
		n = n + 1;
		return(head);
		}
	
 }
