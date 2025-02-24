// Write a program to initialize an array and sort the numbers within the array in ascending
// order.

#include <stdio.h>

int main(void)
{
    int arrayOfNumbers[] = {0, 1, 2, 100, 56, -4};
    int lengthOfArray = sizeof(arrayOfNumbers) / sizeof(arrayOfNumbers[0]);

    // print the elements of array one by one
    printf("Initially, array: ");
    for (int i = 0; i < lengthOfArray; i++)
    {
        printf("%d, ", arrayOfNumbers[i]);
    }
    printf("\n");

    // sorts the array in ascending order
    for (int i = 0; i < lengthOfArray - 1; i++)
    {
        for (int j = i + 1; j < lengthOfArray; j++)
        {
            if (arrayOfNumbers[i] > arrayOfNumbers[j])
            {
                int temp = arrayOfNumbers[i];
                arrayOfNumbers[i] = arrayOfNumbers[j];
                arrayOfNumbers[j] = temp;
            }
        }
    }

    // print the elements of array one by one
   printf("Sorted array(ascending order): ");
    for (int i = 0; i < lengthOfArray; i++)
    {
        printf("%d, ", arrayOfNumbers[i]);
    }
    printf("\n"); 
    return 0;
}