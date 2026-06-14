#include <stdio.h>
#include "book.h"

extern struct Book books[100];
extern int bookCount;

void removeBook()
{
    int id,i,j;

    printf("Enter Book ID: ");
    scanf("%d",&id);

    for(i=0;i<bookCount;i++)
    {
        if(books[i].id==id)
        {
            for(j=i;j<bookCount-1;j++)
                books[j]=books[j+1];

            bookCount--;

            printf("Book Removed\n");
            return;
        }
    }

    printf("Book Not Found\n");
}
