#include<iostream>
using namespace std;

int main()
{
	void hanoi(int n, char one, char two, char three);//��ŵ�������ǵݹ龫�����ȫ���֣�
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
		hanoi(n - 1, one, three, two);  //�����ϣ��Ƚ�n-1������ͨ��3��1�Ƶ�2���м��ֿ�ϸ��Ϊ��n-2������ͨ��3��1�Ƶ�2��--�γɵݹ�
		move(one, three);                    //Ȼ�󣬽��������ӣ��ײ����ӣ�ֱ�Ӵ�1�Ƶ�3
		hanoi(n - 1, two, one, three);   //��󣬽�n-1������ͨ��1��2�Ƶ�3���м��ֿ�ϸ��Ϊ��n-2������ͨ��1��2�Ƶ�3��--�γɵݹ�

	}
}
void move(char x,char y){
	cout << x << "-->" << y << endl;
	
}