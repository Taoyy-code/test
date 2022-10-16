#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int x, n;
	double s;
	cout << "请输入人口基数与年数" << endl;
	cin >> x; 
	cin >> n;
	s = x;
	s =pow((1 +0.001), n)*s;
	cout << s;
	
}