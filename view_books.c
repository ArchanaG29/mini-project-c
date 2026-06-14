#include <stdio.h>
#include "book.h"

extern struct Book books[100];
extern int bookCount;

void viewBooks()
{
    int i;

    for(i=0;i<bookCount;i++)
    {
        printf("\nID       : %d",books[i].id);
        printf("\nTitle    : %s",books[i].title);
        printf("\nAuthor   : %s",books[i].author);
        printf("\nQuantity : %d\n",books[i].quantity);
    }
}
