#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main(){
	double newton(double, double, double, double);
	double a, b, c, d;  //���̱���ϵ����
	cout << "input ϵ��a,b,c,d:";
	cin >> a >> b >> c >> d;
	cout << endl;
	cout << "����һ����Ϊx=" << setw(6) << setprecision(5) << newton(a, b, c, d);  //����С������λ���������ʽ��

	system("pause");
	return 0;
}

double newton(double a, double b, double c, double d)
{
	double x = 1, x0, f, f1;
	do
	{
		x0 = x;  //��Ϊ������1������һ���������Գ�ʼ������xΪ1��
		f = ((a*x0 + b)*x0 + c)*x0 + d;  //ԭ����ֵ
		f1 = (3 * x0 + 2 * b)*x0 + c;   // ΢��ֵ
		x = x0 - f / f1;               //������������
	} while (fabs(x - x0) >= 1e-5);   //ţ�ٷ��̽����������������
	return x;
}