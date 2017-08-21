#include<iostream>
using namespace std;

int main()
{
	const int n = 11;
	int i, j, yhsj[n][n];
	for (i = 1; i < n; i++)    //初始化--第一列、对角元素都赋值为1；
	{
		yhsj[i][1] = 1;
		yhsj[i][i] = 1;
	}

	for (i = 3; i < n;i++)         //从第三行开始计算杨辉三角其他元素；
	for (j = 2; j <= i - 1; j++)
		yhsj[i][j] = yhsj[i - 1][j - 1] + yhsj[i - 1][j];

	for (i = 1; i < n; i++)
	{
		for (j = 1; j <= i; j++)   //输出杨辉三角；
		{
			cout << yhsj[i][j]<<"  ";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}

//#include<iomanip>    主要是对cin,cout之类的一些操纵运算子; 例如 setw(n)设域宽为n个字符 。
                      //这个控制符的意思是保证输出宽度为n。如：
                     //cout << setw(3) << 1 << setw(3) << 10 << setw(3) << 100; 输出结果为
                    //1 10100 （默认是右对齐）当输出长度大于3时(<< 1000)，setw(3)不起作用。