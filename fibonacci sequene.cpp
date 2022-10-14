#include<iostream>
using namespace std;
int main()
{
	int i, f;
	int n = 0;
	int f1 ,f2; 
	f1 = f2 = 1;
	cout << f1 << " " << f2<<" ";
	for (i = 3; i <= 20; i++)
	{
		f = f1 + f2;
		f1 = f2;
		f2 = f;
		n++;
		if (n % 5==0)
		{
			cout << endl;
		}
		cout << f<<" ";
	}
	return 0;
}