#include<iostream>
#include<cmath>          //math.h是c语言的库函数；cmath.h是c++语言的库函数，但是C++也兼容math.h;
using namespace std;

int main()
{
	void godbahe(int);   //先声明   哥赫巴德猜想：一个不小于6的偶数可以表示为2个素数之和；

	int n;
	cout << "input n:";
	cin >> n;
	godbahe(n);         //后调用
	 
	system("pause");
	return 0;

}

void godbahe(int n)   //外定义
{
	bool prime(int m);  //先声明！！！
	int a, b;
	for (a = 3; a <= n / 2; a = a + 2)
	{
		if (prime(a))  //如果a是素数，在进行下一轮b的判断；
		{
			b = n - a;
			if (prime(b))    //后调用
				cout << n << "=" << a << "+" << b << endl;
		}

	}
}

bool prime(int m){          //外定义

	int i;
	double k = sqrt(m);
	for (i = 2; i <=int(k); i++)

	{
		if (m%i == 0) break;  //如果存在一个数使n能够整除，则整个循环结束，跳出；
	}
		
	if (i > k)   return 1;   //如果最后一个数也没能整除，则该语句执行
       else      return 0;       //如果之前有数被整除，则该语句被执行
}