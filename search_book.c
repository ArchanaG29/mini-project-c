#include <stdio.h>
#include "book.h"

extern struct Book books[100];
extern int bookCount;

void searchBook()
{
    int id,i;

    printf("Enter Book ID: ");
    scanf("%d",&id);

    for(i=0;i<bookCount;i++)
    {
        if(books[i].id==id)
        {
            printf("\nBook Found");
            printf("\nTitle : %s",books[i].title);
            printf("\nAuthor: %s",books[i].author);
            return;
        }
    }

    printf("\nBook Not Found");
}
