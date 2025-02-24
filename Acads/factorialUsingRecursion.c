#include <stdio.h>

int findFactorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * findFactorial(n - 1);
    }
}

int main(void)
{

    int num;
    repeat:
    printf("Enter the number to find factorial of: ");
    scanf("%d", &num);
    if(num < 0) {
        printf("The factorial of negative numbers is undefined. Enter a valid number again.\n");
        goto repeat;
    }
    int factorial = findFactorial(num);
    printf("The factorial of %d is %d.", num, factorial);
}