#include<iostream>
using namespace std;
int main()
{
	int n, z,max,num=0;
	int a[10];
	cout << "请输入整数个数：";
	cin >> n;
	cout << "请输入数字：";
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
	cout << "最大值为" << max << " " << "它所位于的次序是：" << (num + 1) << endl;
}