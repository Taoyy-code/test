#include<iostream>
using namespace std;
int main()
{
	int a,i;
	cout << "输入一个整数" << endl;
	cin >> a;
	for (i = 2; i < a; i++)
	{
		if (a % i == 0)
			break;
	}

		if (i == a)
		{
			cout << "素数" << a << endl;
		}
		else
		{
			cout << "合数" << a << endl;
		}
	
	return 0;

}