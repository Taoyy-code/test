#include<stdio.h>
int main()
{
	int m =45;
	int n = 35;
	int r;
	r = m % n;
	if (r == 0) 
	{
		printf("���Լ���ǣ�%d", n);
	}
	else
	{
		m = n;
		n = r;
	}
	printf("���Լ���ǣ�% d", n);
	return 0;
}