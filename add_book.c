#include <stdio.h>
#include "book.h"

extern struct Book books[100];
extern int bookCount;

void addBook()
{
    printf("Enter Book ID: ");
    scanf("%d",&books[bookCount].id);

    printf("Enter Title: ");
    scanf(" %[^\n]",books[bookCount].title);

    printf("Enter Author: ");
    scanf(" %[^\n]",books[bookCount].author);

    printf("Enter Quantity: ");
    scanf("%d",&books[bookCount].quantity);

    bookCount++;

    printf("\nBook Added Successfully\n");
}
