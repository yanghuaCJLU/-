#include<iostream>
using namespace std;

int main()
{
	const int n = 8;         //���ڿɱ�����ԣ��������nΪconst,����ֱ��ͨ���ı�n���ı����ԣ�
	int i, number, top, bott, mid, local, a[n];  //numberΪ����ֵ��topΪ����ף�topΪ����ͷ��midΪ�м�ֵ��localΪ�����Ķ�λֵ��
	bool flag = true, sign;
	char c;
	cout << "enter data:" << endl;
	cin >> a[0];
	i = 1;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              
	while (i < n)                                //�����������飻
	{
		cin >> a[i];                                //�ɶԳ�����иĽ�������������һ������Ȼ���������������������
		if (a[i] >= a[i - 1]) i++;
		else cout << "enter this data again:";
	}
	cout << endl;
    
	for (i = 0; i < n; i++)              //������飻
		cout << a[i] << " ";
	cout << endl;


	while(flag)
	{
		cout << "input number to look for:";
		cin >> number;

		sign = false;      //sign��ʼ��Ϊ�٣���ʾδ�ҵ���
		top = 0;             //�����������ʼλ�ã�
		bott = n - 1;    //���������ĩ��λ�ã�

		if ((number<a[0]) && number>a[i - 1])
			local = -1;    //Ҫ���ҵ����������з�Χ�ڣ�

		while ((!sign) && (top < bott))   //�𽥱Ƚϲ��ң�Դ���������
		{
			mid = (top + bott) / 2;
			if (number == a[mid] )
			{
				local = mid;
				cout << "find " << number << ",its position is" << local + 1 << endl;
				sign = true;              //�ҵ�������ѭ����
			}
	        
			else if ( number == a[top] )   //���ݽ�����㣬���ӵ�������
			{
				local = top;
				cout << "find " << number << ",its position is" << local + 1 << endl;
				sign = true;
			}

			else if ( number == a[bott])     //���ݽ�����㣬���ӵ�������
			{
				local = bott;
				cout << "find " << number << ",its position is" << local + 1 << endl;
				sign = true;
			}

            else if (number < a[mid])  bott = mid-1;

			else  top = mid + 1;
		}

		if (!sign || local ==-1)                             //���û�ҵ���ѡ���Ƿ���������������ݣ�
			cout << number << "has not found" << endl;
		cout << "continue or not(Y/N) ?";
		cin >> c;
		if (c == 'N' || c == 'n')
			flag = false;              //������������
	}

	system("pause");
	return 0;

}