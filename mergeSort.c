#include <stdio.h>

int x;

int printArray(int arraySize, int *array, int sorted)
{
    printf("\n");
    if (sorted)
        printf("Sorted array: \n");
    else
        printf("Unsorted array: \n");

    for (x=0; x < arraySize; x++)
    {
        printf("%d ", array[x]);
    }

    return 0;
}

int * MergeSort(int *arrayArg, int arraySize)
{
    int array[arraySize];
    
    for (x = 0; x < arraySize; x++)
    {
        array[x] = *(arrayArg + x);
    }

    printf("");
    if (arraySize > 1)
    {
        int leftMiddleSize = arraySize / 2;
        int rightMiddleSize = arraySize - leftMiddleSize;

        int leftMiddleArray[leftMiddleSize];
        int rightMiddleArray[rightMiddleSize];
        int i;
        int counter = 0;

        for (i=0; i < leftMiddleSize; i++)
        {
            leftMiddleArray[i] = array[i];
        }
        
        for (i=0; i < rightMiddleSize; i++)
        {
            counter = i + leftMiddleSize;
            rightMiddleArray[i] = array[counter];
        }
        
        int *tempArray;

        tempArray = MergeSort(leftMiddleArray, leftMiddleSize);

        for (i=0; i < leftMiddleSize; i++)
        {
            leftMiddleArray[i] = *(tempArray + i);
        }

        tempArray = MergeSort(rightMiddleArray, rightMiddleSize);

        for (i=0; i < rightMiddleSize; i++)
        {
            rightMiddleArray[i] = *(tempArray + i);
        }

        int leftIndex = 0;
        int rightIndex = 0;

        // Merge array
        for (i = 0; i < arraySize; i++)
        {
            if (leftIndex >= leftMiddleSize)
            {
                array[i] = rightMiddleArray[rightIndex];
                rightIndex++;
            }
            else if (rightIndex >= rightMiddleSize)
            {
                array[i] = leftMiddleArray[leftIndex];
                leftIndex++;
            }
            else if (leftMiddleArray[leftIndex] < rightMiddleArray[rightIndex])
            {
                array[i] = leftMiddleArray[leftIndex];
                leftIndex++;
            }
            else
            {
                array[i] = rightMiddleArray[rightIndex];
                rightIndex++;
            }
       }
        
        arrayArg = &array[0];

    }

    return arrayArg;
}

int main(void)
{
    printf("WELCOME TO MERGE SORT\n");
    
    int arraySize;
    printf("Set the numbers amount you want to sort:\n");
    scanf("%d", &arraySize);
       
    int array[arraySize];

    int numberInserted;
    for (x=0; x < arraySize; x++)
    {
        printf("insert the %d number: ", x + 1);
        scanf("%d", &numberInserted);

        array[x] = numberInserted;

        printf("\n");
    }

    printArray(arraySize, array, 0);

    printf("\nOrdering array...\n");
    
    int *orderedArray;
    orderedArray = MergeSort(array, arraySize);

    for (x = 0; x < arraySize; x++)
    {
        array[x] = *(orderedArray + x);
    }

    printArray(arraySize, array, 1);

    return 0;
}
