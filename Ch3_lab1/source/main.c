#include <stdio.h>
#include <stdlib.h>

int Odd(int a);
int Even(int a);
int TotalSum(int a);

int main(void)
{
	int n, Sum;
	char AddChoice;
	printf("1+2+...+n =?�п�Jn = ");
	scanf_s("%d", &n);
	getchar();
	printf("�аݭn���_�ƩM(O),���ƩM(E),�٬O��ƩM(I)?�п��:");
	scanf_s("%c", &AddChoice);

	switch (AddChoice)
	{
	case 'O':
		Sum = Odd(n);
		break;
	case 'E':
		Sum = Even(n);
		break;
	case 'I':
		Sum = TotalSum(n);
		break;
	default:
		printf("��ܿ��~\n");
		return -1;
	}
	printf("�`�X��%d\n", Sum);
	system("pause");
	return 0;
}
int Odd(int a)
{
	int i, total = 0;
	for (i = 0; i <= a ; i++)
	{
		if (i % 2 == 1)
			total = total + i;
	}
	return total;
}
int Even(int a)
{
	int i, total = 0;
	for (i = 0; i <= a; i++)
	{
		if(i % 2 == 0)
			total = total + i;
	}
	return total;
}
int TotalSum(int a)
{
	return Odd(a) + Even(a);
}