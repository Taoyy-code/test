#include<iostream>
using namespace std;
int main()
{
	int a,i;
	cout << "����һ������" << endl;
	cin >> a;
	for (i = 2; i < a; i++)
	{
		if (a % i == 0)
			break;
	}

		if (i == a)
		{
			cout << "����" << a << endl;
		}
		else
		{
			cout << "����" << a << endl;
		}
	
	return 0;

}