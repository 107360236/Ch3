#include <stdio.h>
#include <stdlib.h>

long int recursive_factorial(int e);

int main(void)
{
	int m, n;
	long int ans;
	long int a, b, c;
	printf("求排列組合C(m,n)\n");
	printf("m = ");
	scanf_s("%d", &m);
	printf("n = ");
	scanf_s("%d", &n);
	a = recursive_factorial(m);
	b = recursive_factorial(n);
	c = recursive_factorial(m - n);
	ans = a / (b*c);
	printf("C(%d,%d)=%d\n", m, n, ans);
	system("pause");
	return 0;
}

long int recursive_factorial(int e)
{
	if (e > 1)
	{
		long int result = e * recursive_factorial(e - 1);
		return result;
	}
	else
	{
		return 1;
	}
}