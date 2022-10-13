#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int i, n;
	double	sum=0;
	cout << "ÊäÈënµÄÖµ" << endl;
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		sum = sum + (pow(-1, i-1)) / i;
	}
	cout << "sum=" << sum << endl;
	return 0;
}