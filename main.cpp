#include<iostream>
using namespace std;

int main()
{
	const int n = 8;         //对于可变的属性，定义变量n为const,后面直接通过改变n来改变属性；
	int i, number, top, bott, mid, local, a[n];  //number为搜索值，top为区域底，top为区域头，mid为中间值，local为搜索的定位值；
	bool flag = true, sign;
	char c;
	cout << "enter data:" << endl;
	cin >> a[0];
	i = 1;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              
	while (i < n)                                //输入升序数组；
	{
		cin >> a[i];                                //可对程序进行改进：先任意输入一组数，然后进行排序，最后调用搜索；
		if (a[i] >= a[i - 1]) i++;
		else cout << "enter this data again:";
	}
	cout << endl;
    
	for (i = 0; i < n; i++)              //输出数组；
		cout << a[i] << " ";
	cout << endl;


	while(flag)
	{
		cout << "input number to look for:";
		cin >> number;

		sign = false;      //sign初始化为假，表示未找到；
		top = 0;             //查找区间的起始位置；
		bott = n - 1;    //查找区间的末端位置；

		if ((number<a[0]) && number>a[i - 1])
			local = -1;    //要查找的数不在序列范围内；

		while ((!sign) && (top < bott))   //逐渐比较查找；源程序的搜索
		{
			mid = (top + bott) / 2;
			if (number == a[mid] )
			{
				local = mid;
				cout << "find " << number << ",its position is" << local + 1 << endl;
				sign = true;              //找到就跳出循环；
			}
	        
			else if ( number == a[top] )   //根据结果不足，补加的搜索；
			{
				local = top;
				cout << "find " << number << ",its position is" << local + 1 << endl;
				sign = true;
			}

			else if ( number == a[bott])     //根据结果不足，补加的搜索；
			{
				local = bott;
				cout << "find " << number << ",its position is" << local + 1 << endl;
				sign = true;
			}

            else if (number < a[mid])  bott = mid-1;

			else  top = mid + 1;
		}

		if (!sign || local ==-1)                             //如果没找到，选择是否重新输入查找数据；
			cout << number << "has not found" << endl;
		cout << "continue or not(Y/N) ?";
		cin >> c;
		if (c == 'N' || c == 'n')
			flag = false;              //结束整个程序；
	}

	system("pause");
	return 0;

}