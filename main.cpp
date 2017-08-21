#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main(){
	double newton(double, double, double, double);
	double a, b, c, d;  //方程变量系数；
	cout << "input 系数a,b,c,d:";
	cin >> a >> b >> c >> d;
	cout << endl;
	cout << "方程一个解为x=" << setw(6) << setprecision(5) << newton(a, b, c, d);  //控制小数点后的位数（输出格式）

	system("pause");
	return 0;
}

double newton(double a, double b, double c, double d)
{
	double x = 1, x0, f, f1;
	do
	{
		x0 = x;  //因为是求在1附近的一个根，所以初始化变量x为1；
		f = ((a*x0 + b)*x0 + c)*x0 + d;  //原函数值
		f1 = (3 * x0 + 2 * b)*x0 + c;   // 微分值
		x = x0 - f / f1;               //函数变量迭代
	} while (fabs(x - x0) >= 1e-5);   //牛顿方程解算迭代结束条件；
	return x;
}