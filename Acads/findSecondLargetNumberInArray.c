// Write a program to find the second largest number in the given array of numbers.

#include <stdio.h>

int main(void)
{

    int arrayOfNumbers[] = {-100, -10, 1, 5, 70, 56};

    int lengthOfArray = sizeof(arrayOfNumbers) / sizeof(arrayOfNumbers[0]);

    // sort the array in descending order(using bubble sort)
    for (int i = 0; i < lengthOfArray - 1; i++)
    {
        for (int j = 0; j < lengthOfArray - i - 1; j++)
        {
            if (arrayOfNumbers[j] < arrayOfNumbers[j + 1])
            {
                // Swap the elements
                int temp = arrayOfNumbers[j];
                arrayOfNumbers[j] = arrayOfNumbers[j + 1];
                arrayOfNumbers[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < lengthOfArray; i++)
    {
        printf("%d ", arrayOfNumbers[i]);
    }

    // print the second largest number
    printf("The second largest number in the array is %d\n", arrayOfNumbers[1]);

    return 0;
}