#include <stdio.h>

int calculateSum(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += (i * 2);
    }
    return sum;
}

int main(void)
{
    int n;
    printf("How many first even even numbers do you want to add? \n");
    scanf("%d", &n);
    int sum = calculateSum(n);

    printf("The sum of first %d even numbers is %d\n", n, sum);
    return 0;
}