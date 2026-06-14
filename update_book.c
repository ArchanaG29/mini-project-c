#include <stdio.h>
#include "book.h"

extern struct Book books[100];
extern int bookCount;

void updateBook()
{
    int id,i;

    printf("Enter Book ID: ");
    scanf("%d",&id);

    for(i=0;i<bookCount;i++)
    {
        if(books[i].id==id)
        {
            printf("New Title: ");
            scanf(" %[^\n]",books[i].title);

            printf("New Author: ");
            scanf(" %[^\n]",books[i].author);

            printf("New Quantity: ");
            scanf("%d",&books[i].quantity);

            printf("Book Updated\n");
            return;
        }
    }

    printf("Book Not Found\n");
}
