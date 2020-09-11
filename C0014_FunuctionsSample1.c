#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int isTriangular(int number)
{

	int i;
	for (i = 1; number > 0; i++)
		number -= i;
	if (number == 0)
		return 1;
	return 0;
}

int main()
{

	int x;
	do
	{

		scanf("%d", &x);
		if (x > 0)
			if (isTriangular(x))
				printf("%d is a triangular number\n", x);
			else
				printf("%d is NOT a triangular number\n", x);

	} while (x > 0);
}