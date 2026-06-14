#include <stdio.h>
#include "book.h"

void listIssuedBooks()
{
    int i;

    printf("\n========== ISSUED BOOKS ==========\n");

    if(issueCount == 0)
    {
        printf("No books are currently issued.\n");
        return;
    }

    for(i = 0; i < issueCount; i++)
    {
        printf("\nRecord %d\n", i + 1);
        printf("Book ID  : %d\n", issued[i].bookId);
        printf("User ID  : %d\n", issued[i].userId);
        printf("User Name: %s\n", issued[i].userName);
        printf("-----------------------------\n");
    }
}
