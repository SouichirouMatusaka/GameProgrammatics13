

#include <iostream>
#include <string>


void FizzBazz(int num,int a,int b);

int main()
{
	int num= 100;
	int a = 3;
	int b = 5;
	FizzBazz(num,a,b);
}

void FizzBazz(int num,int a,int b)
{
	
	for (int i = 1; i <= num; i++)
	{
		if (i % a == 0 && i % b == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % a == 0)
		{
			printf("Fizz");
		}
		else if (i % b == 0)
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