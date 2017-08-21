#include<iostream>
using namespace std;

int main()
{
	void hanoi(int n, char one, char two, char three);//汉诺塔程序是递归精神的完全体现；
	int m;
	cout << "input the number 0f disks:";
	cin >> m;

	cout << "the steps of moveing " << m << "disks:" << endl;
	hanoi(m, 'A', 'B', 'C');

	system("pause");
	return 0;
}

void hanoi(int n, char one, char two, char three)
{
	void move(char x, char y);
	if (n == 1)  move(one, three);
	else
	{
		hanoi(n - 1, one, three, two);  //总体上，先将n-1个盘子通过3从1移到2（中间又可细分为将n-2个盘子通过3从1移到2）--形成递归
		move(one, three);                    //然后，将最大的盘子（底部盘子）直接从1移到3
		hanoi(n - 1, two, one, three);   //最后，将n-1个盘子通过1从2移到3（中间又可细分为将n-2个盘子通过1从2移到3）--形成递归

	}
}
void move(char x,char y){
	cout << x << "-->" << y << endl;
	
}