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
	//����һ��������β��λ��
	for ( i = 0; i < n/2; i++)//ֻ��Ҫ����һ��
	{
		t = a[n-i-1];
		a[n - i - 1] = a[i];
		a[i] = t;
	}
	for (i = 0; i < n; i++)

	{
		cout << a[i]<<" ";
	}
	//��������ð�ݷ�����������һ��һ�����ݵ�����
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