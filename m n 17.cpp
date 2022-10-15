#include<iostream>
using namespace std;
int main()
{
	int m, n, i;
	int sum = 0;
	cout << "ÊäÈëm,n" << endl;
	cin >> m;
	cin >> n;
	for (i = m; i <= n; i++)
	{
		if (i % 17 == 0)
		{
			sum = sum + i;
		}
	}
	cout << sum;
	return 0;

}