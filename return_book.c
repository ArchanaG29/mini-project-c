#include <stdio.h>
#include "book.h"

extern struct Book books[100];
extern int bookCount;

void returnBook()
{
    int id,userId,lateDays,fine;
    int i;

    printf("Enter Book ID: ");
    scanf("%d",&id);

    printf("Enter User ID: ");
    scanf("%d",&userId);

    printf("Enter Late Days: ");
    scanf("%d",&lateDays);

    fine = lateDays * 5;

    for(i=0;i<bookCount;i++)
    {
        if(books[i].id==id)
        {
            books[i].quantity++;

            printf("\nFine Amount : Rs.%d",fine);
            printf("\nBook Returned Successfully\n");

            return;
        }
    }

    printf("Book Not Found\n");
}
