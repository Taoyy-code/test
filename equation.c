#include<stdio.h>
#include<math.h>
int main()
{
	double a , b , c , dat;
	double x1, x2;
	printf("请输入相关系数\n");
	scanf_s("%lf %lf %lf", &a, &b, &c);
	dat = b * b - 4 * a * c;
	if (dat >=  0)
	{
		x1 = (-b + sqrt(dat)) / (2 * a);
		x2 = (-b - sqrt(dat)) / (2 * a);
		printf("x1=%.5f x2=%.5f\n", x1, x2);
	}
	else
	{
		printf("此方程无解");
	}
	return 0;
}