#include<iostream>
using namespace std;
int main()
{
	int n, z,max,num=0;
	int a[10];
	cout << "����������������";
	cin >> n;
	cout << "���������֣�";
	for (int i = 0; i < n; i++)
	{
		cin >>z;
		a[i] = z;
	}
	max = a[0];
	for (int i = 1; i < n; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
			num = i;
		}
	}
	cout << "���ֵΪ" << max << " " << "����λ�ڵĴ����ǣ�" << (num + 1) << endl;
}