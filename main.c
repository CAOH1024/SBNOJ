#include <stdio.h>

int fn(int num)
{
	if (num != 1)
	{
		if (num % 2 == 1)
		{
			num = (num * 3) + 1;
			printf("%d\ ", num);
			fn(num);
		}
		else
		{
			num = num / 2;
			printf("%d\ ", num);
			fn(num);
		}
	}
	return 0;
}

int main()
{
	int a = 0;
	scanf_s("%d", &a);
	printf("%d\ ", a);
	fn(a);
	return 0;
}