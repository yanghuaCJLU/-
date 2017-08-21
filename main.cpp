#include<iostream>
using namespace std;
int main()
{
	int i, k, m, n, num[50], *p;
	cout << "input the number of person :n=";
	cin >> n;
	p = num;
	for (i = 0; i < n; i++)
	{
		*(p+i) = i + 1;   //每个人进行编号;p+i==p++;最后输出的是序号
	}
	i = 0;
	k = 0;
	m = 0;
	while (m < n - 1)
	{
		if (*(p + i) != 0) k++;              //报一次数，计数加1；
		if (k == 3) { *(p + i) = 0; k = 0; m++; }//如果报数计数到达3次则计数次数置0，下一次重新开始；m为已经退出的人数；
		i++;
		if (i == n) i = 0;      //一圈报数结束，则初始化计数，从新开始；
	}
	while (*p == 0)p++;  //搜索未被标记为0的人的编号；并输出
	cout << "The last one number is:" << *p;

	system("pause");
	return 0;

}