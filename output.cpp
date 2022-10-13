#include<iostream>
using namespace std;
int main()
{
	int i,j;
	int n=0;
	for (i = 2; i <= 100; i++)
	{
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
				break;	
		}
		if (j == i)
		{
			n++;
			cout<<" " << i;
			if (n % 5 == 0)
			{
				cout << endl;
			}
		}
		
	}
	return 0;
}
