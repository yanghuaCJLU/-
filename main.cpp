#include<iostream>
using namespace std;

int main()
{
	const int n = 11;
	int i, j, yhsj[n][n];
	for (i = 1; i < n; i++)    //��ʼ��--��һ�С��Խ�Ԫ�ض���ֵΪ1��
	{
		yhsj[i][1] = 1;
		yhsj[i][i] = 1;
	}

	for (i = 3; i < n;i++)         //�ӵ����п�ʼ���������������Ԫ�أ�
	for (j = 2; j <= i - 1; j++)
		yhsj[i][j] = yhsj[i - 1][j - 1] + yhsj[i - 1][j];

	for (i = 1; i < n; i++)
	{
		for (j = 1; j <= i; j++)   //���������ǣ�
		{
			cout << yhsj[i][j]<<"  ";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}

//#include<iomanip>    ��Ҫ�Ƕ�cin,cout֮���һЩ����������; ���� setw(n)�����Ϊn���ַ� ��
                      //������Ʒ�����˼�Ǳ�֤������Ϊn���磺
                     //cout << setw(3) << 1 << setw(3) << 10 << setw(3) << 100; ������Ϊ
                    //1 10100 ��Ĭ�����Ҷ��룩��������ȴ���3ʱ(<< 1000)��setw(3)�������á�