#include <stdio.h>
#include <string.h>

int main(void)
{

    char word[50], reversedWord[50];
    printf("Enter the word to be checked(palindrome or not): ");
    scanf("%s", word);
    int index = 0;
    for (int i = strlen(word) - 1; i >= 0; i--)
    {
        reversedWord[index++] = word[i];
    }

    if (strcmp(word, reversedWord) == 0)
    {
        printf("%s is a palindrome word.\n", word);
    }
    else
    {
        printf("%s is not a  palindrome word.\n", word);
    }
    return 0;
}