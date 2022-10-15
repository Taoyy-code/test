#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n;
	int a, b, c,i,j=0;
	double m;
	cout << "ÇëÊäÈënÖµ" << endl;
	cin >> n;
	for (i = 100; i <= 999; i++)
	{
		a = i / 100;
		b = i / 10 % 10;
		c = i % 10;
		m = sqrt(i);
		if (m == int(m) && (!(a != b && b != c && a != c)))
		{
			j++;
			if (j == n)
				cout << i<<endl;
		}			
	}
	return 0;
}