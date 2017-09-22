#include"student.h"

%github联系，，

int main()
{   
	student *creat();
	void print(student *);
	student *del(student *head, long);
	student *insert(student *head, student *);

	

	student *head, stu;
	long del_num;
	cout << "input records:" << endl;
	head = creat();
	print(head);
	cout << endl << "input the delete numbers:";
	cin >> del_num;
	head = del(head, del_num);
	print(head);
	cout << endl << "input the insert record:";
	cin >> stu.num >> stu.score;
	head = insert(head, &stu);
	print(head);

	system( "pause" );
	return 0;
}

