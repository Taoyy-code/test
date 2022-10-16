#include<iostream>
using namespace std;
int main()
{
	int t, i,n,num;
	int a[10];
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> num;
		a[i] = num;
	}
	//方法一，调换收尾的位置
	for ( i = 0; i < n/2; i++)//只需要运行一半
	{
		t = a[n-i-1];
		a[n - i - 1] = a[i];
		a[i] = t;
	}
	for (i = 0; i < n; i++)

	{
		cout << a[i]<<" ";
	}
	//方法二，冒泡法，将首数字一个一个传递到后排
	/*for (int j = 0; j < n; j++)
	{
		for ( i = 0; i <n-j-1; i++)
		{
			int t;
			t = a[i+1];
			a[i + 1] = a[i];
			a[i] = t;
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}*/
	return 0;
}