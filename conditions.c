#include <stdio.h>

int main(void)
{
	int number1, number2;

	printf("Insert the first number:\n");
	scanf("%d", &number1);

	printf("Insert the second number:\n");
	scanf("%d", &number2);

	if (number1 == number2)
	{
		printf("Both numbers are equal\n");
	}
	else if (number1 > number2)
	{
		printf("Number 1 is bigger than number 2\n");
	}
	else
	{
		printf("Number 2 is bigger than number 1\n");
	}

	printf("Bye");
}
