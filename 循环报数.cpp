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
		*(p+i) = i + 1;   //ÿ���˽��б��;p+i==p++;�������������
	}
	i = 0;
	k = 0;
	m = 0;
	while (m < n - 1)
	{
		if (*(p + i) != 0) k++;              //��һ������������1��
		if (k == 3) { *(p + i) = 0; k = 0; m++; }//���������������3�������������0����һ�����¿�ʼ��mΪ�Ѿ��˳���������
		i++;
		if (i == n) i = 0;      //һȦ�������������ʼ�����������¿�ʼ��
	}
	while (*p == 0)p++;  //����δ�����Ϊ0���˵ı�ţ������
	cout << "The last one number is:" << *p;

	system("pause");
	return 0;

}