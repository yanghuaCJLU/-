#include<iostream>
#include<cmath>          //math.h��c���ԵĿ⺯����cmath.h��c++���ԵĿ⺯��������C++Ҳ����math.h;
using namespace std;

int main()
{
	void godbahe(int);   //������   ��հ͵²��룺һ����С��6��ż�����Ա�ʾΪ2������֮�ͣ�

	int n;
	cout << "input n:";
	cin >> n;
	godbahe(n);         //�����
	 
	system("pause");
	return 0;

}

void godbahe(int n)   //�ⶨ��
{
	bool prime(int m);  //������������
	int a, b;
	for (a = 3; a <= n / 2; a = a + 2)
	{
		if (prime(a))  //���a���������ڽ�����һ��b���жϣ�
		{
			b = n - a;
			if (prime(b))    //�����
				cout << n << "=" << a << "+" << b << endl;
		}

	}
}

bool prime(int m){          //�ⶨ��

	int i;
	double k = sqrt(m);
	for (i = 2; i <=int(k); i++)

	{
		if (m%i == 0) break;  //�������һ����ʹn�ܹ�������������ѭ��������������
	}
		
	if (i > k)   return 1;   //������һ����Ҳû��������������ִ��
       else      return 0;       //���֮ǰ�����������������䱻ִ��
}