#include <stdio.h>

#define NELEMS(x)  (sizeof(x) / sizeof((x)[0]))

void print(char string[])
{	
	//int stringSize = sizeof(string) / sizeof(string[0]);
	size_t stringSize = NELEMS(string);
	printf("%d\n", stringSize);
	for (int i=0; i < stringSize; i++)
	{
		printf("%c", string[i]);
	}
	printf("\n");	
}


int main(void)
{
	int array[] = {4, 5, 2, 7, 14, 54, 323, 6, 1, 3};
	int arraySize = sizeof(array);

	char message[10] = "hola mundo";
	print(message);

}
