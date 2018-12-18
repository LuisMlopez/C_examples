#include <stdio.h>

int temp;

int printArray(int array[], int arraySize)
{
	for(int x=0; x < arraySize - 1; x++)
	{
		printf("%d, ", array[x]);
	}

	return 0;
}

int bubbleSort(int *pos1, int *pos2)
{
	if(*pos1 > *pos2)
	{
		temp = *pos1;
		*pos1 = *pos2;
		*pos2 = temp;
	}

	return 0;
}

int orderArray(int array[], int arraySize)
{
	for(int x=0; x < arraySize - 1; x++)
	{
		for (int y=0; y < arraySize - 1 - x; y++)
		{
			bubbleSort(&array[y], &array[y + 1]);
		}
	}

	return 0;
}

int main(void)
{
	int array[] = {4, 5, 2, 7, 14, 54, 323, 6, 1, 3};
	int arraySize = sizeof(array) / sizeof(array[0]);

	printf("Unordered array: \n");
	printArray(array, arraySize);

	orderArray(array, arraySize);

	printf("\nOrdered array: \n");
        printArray(array, arraySize);

	return 0;

}
