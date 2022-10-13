#include<stdio.h>
int main()
{
	int m =45;
	int n = 35;
	int r;
	r = m % n;
	if (r == 0) 
	{
		printf("最大公约数是：%d", n);
	}
	else
	{
		m = n;
		n = r;
	}
	printf("最大公约数是：% d", n);
	return 0;
}