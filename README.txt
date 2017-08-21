# 字符串索引
//自改自编
#include<iostream>           
using namespace std;

int main()
{
	char str[50], *pstr;
	int i, j, k, e10, digit, ndigit, a[10], *pa;
	cout << "input a string:" << endl;
	gets_s(str);
	cout << endl;

	pstr =str;
	pa = a;

	ndigit = 0;//整数个数；
	i = j = 0;

	while (*(pstr + i) != '\0')
	{
		if ((*(pstr + i) >= '0') && (*(pstr + i) <= '9'))    
			j++;                                                  //是一个int型字符；
		else{           //一个非int字符出现，就往前推整数；     
			if (j >1)
			{
				digit =(int)*(pstr + i - 1) - 48; //将个位数赋予digit
				k = 1;
				e10 = 1; 
				while (k < j)
				{
					                   //连续int字符在一起组成的整数；
					e10 = e10 * 10;
						digit = digit + ((int)*(pstr + i - 1 - k) - 48) * e10;
					
					k++;
				}
				*pa = digit;//将整数放在数组a中
				ndigit++;
				pa++;     //使指针pa指向下一个元素；
				j = 0;
			}
		}
		i++;       //与while配合；
    }

if (j > 0)                                  //以数字结尾字符串的最后一个数据；
	{
		digit = (int)*(pstr + i - 1) - 48;
		k = 1;                  
		e10 = 1;
		while (k < j)
		{
			
			e10 = e10 * 10;
			digit = digit + ((int)*(pstr + i - 1 - k) - 48) * e10;
            k++;
		}
		*pa = digit;//将整数放在数组a中
		ndigit++;
	}

	cout << "there are " << ndigit << " numbers in this line,they are:" << endl;
 
	pa = &a[0]; //指针从初始元素开始；
	for (j = 0; j <ndigit; j++)
		cout << *(pa + j) << endl;
	cout << endl;



	system("pause");
	return 0;
}
