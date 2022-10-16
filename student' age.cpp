#include<iostream>
using namespace std;
int main()
{
	int n=0, age,sum=0,k=0;
	double avr;
	int st[10];
	int i,j;
	cout << "人数" << endl;
	cin >> n;
	cout << "输入年龄" << endl;
	for (i = 0; i <n; i++)
	{
		cin >> age;
		sum = sum + age;
		st[i] = age;
	}
	if (n > 0)
	{
		avr = sum / n;
		
		for (j = 0; j < n; j++)
		{
			if (st[j] > avr)
				k = k + 1;
		}
		cout <<"平均数是" << avr << " "<<"大于平均数的个数为" << k << endl;
	}
	
	return 0;
}