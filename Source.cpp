#include <stdio.h>

void FizzBazz(int num,int a,int b);

int main()
{
	int num= 100;
	int n0 = 3;
	int n1 = 5;
	FizzBazz(num,n0,n1);
}

void FizzBazz(int num,int n0,int n1)
{
	for (int i = 1; i <= num; i++)
	{
		if (i % n0 == 0 && i % n1 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % n0 == 0)
		{
			printf("Fizz");
		}
		else if (i % n1 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}

		printf("\n");
	}
}
