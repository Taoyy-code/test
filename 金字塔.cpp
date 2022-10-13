#include<iostream>
using namespace std;
int main()
{
	char ch = 'a';
	int i,j,n;
	cout << "ÊäÈë²ãÊý" << endl;
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			cout << ch ;
		}
		cout << endl;
	}
	return 0;

}