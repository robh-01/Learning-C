// Create a structure named Book with
// members Book_Name, Price and Author_Name, then take input for 10 records of Book
// and print the name of authors having the price of book greater than 1000.

#include <stdio.h>

struct Book
{
    char Book_Name[50];
    float Price;
    char Author_Name[50];

} books[10];

int main(void)
{
    for (int i = 0; i < 4; i++)
    {
        printf("%d.\n", i + 1);

        printf("Enter Book name: ");
        fgets(books[i].Book_Name, 50, stdin);

        printf("Enter book's price: ");
        scanf("%f", &books[i].Price);
        getchar();

        printf("Enter book's author name: ");
        fgets(books[i].Author_Name, 50, stdin);

        printf("\n");
    }

    printf("Name of authors whose book cost more than 1000 is: \n");
    for (int i = 0; i < 4; i++)
    {
        if (books[i].Price > 1000)
        {
            printf("%s", books[i].Author_Name);
        }
    }

    return 0;
}