#include <stdio.h>
#include <string.h>
#include "book.h"

extern struct Book books[100];
extern int bookCount;

extern struct Issue issued[100];
extern int issueCount;

void issueBook()
{
    int id,i;

    printf("Enter Book ID: ");
    scanf("%d",&id);

    for(i=0;i<bookCount;i++)
    {
        if(books[i].id==id)
        {
            if(books[i].quantity>0)
            {
                issued[issueCount].bookId=id;

                printf("Enter User ID: ");
                scanf("%d",&issued[issueCount].userId);

                printf("Enter User Name: ");
                scanf("%s",issued[issueCount].userName);

                printf("\nIssue Date : 14-06-2026");
                printf("\nDue Date   : 21-06-2026");

                books[i].quantity--;

                issueCount++;

                printf("\n\nBook Issued Successfully\n");
            }
            else
            {
                printf("Book Not Available\n");
            }

            return;
        }
    }

    printf("Book Not Found\n");
}
