/* made by
    1 : Abdelrahman Ahmed Adel
    2 : Assem Abdelrahman Hefny
    3 : Hager Abdelazeem Soliman
    4 : Aml Hesham Hosney
*/

#include <stdio.h>

struct library
{
    char book_name[100];
    char author_name[100];
    float cost;
    int no_of_pages;
};

int main()
{
    struct library lib[100];
    int i, j, count;
    i = 0;
    j = 0;
    count = 0;

    while (1)
    {
        printf("===============================\n");
        printf("|| Library System Management ||\n");
        printf("===============================\n");
        printf("  1 : Add Book details\n ");
        printf(" 2 : Display the list of books and its details\n ");
        printf(" 3 : Display the total numbers of books in the library\n ");
        printf(" 4 : Exit\n\n");
        printf(" Enter the number: ");
        scanf(" %d", &j);

        switch (j)
        {
        case 1:
            printf(" \nYou can add the details of the book ");
            printf(" \nEnter the book name: ");
            scanf(" %s", lib[i].book_name);
            printf(" \nEnter the author name: ");
            scanf(" %s", lib[i].author_name);
            printf(" \nEnter the number of pages: ");
            scanf(" %d", &lib[i].no_of_pages);
            printf(" \nEnter the cost of the book: ");
            scanf(" %f", &lib[i].cost);
            count = count + 1;
            i = i + 1;
            break;

        case 2:
            if (count == 0)
            {
                printf(" \nThere are no books stored!!\n\n ");
            }
            else
            {
                printf(" \nYou can view the list of books\n ");
                printf(" \nThe list of books are :\n ");
                for (i = 0; i < count; i++)
                {
                    printf(" \nThe name of the book is: %s ", lib[i].book_name);
                    printf(" \nThe name of the author is: %s ", lib[i].author_name);
                    printf(" \nThe number of pages are: %d ", lib[i].no_of_pages);
                    printf(" \nThe cost of the book is: %f\n\n ", lib[i].cost);
                    printf("=======================================");
                }
            }
            break;

        case 3:
            printf(" \nTotal number of books in the library are: %d\n\n ", count);
            break;

        case 4:
            exit(0);

        default:
            printf(" \nInvalid number entered\n\n ");
        }
    }
}