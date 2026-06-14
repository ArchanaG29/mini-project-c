#include <stdio.h>
#include "book.h"

/* Global Variables */
struct Book books[100];
int bookCount = 0;

struct Issue issued[100];
int issueCount = 0;

int main()
{
    int choice;

    do
    {
        printf("\n====================================");
        printf("\n   LIBRARY MANAGEMENT SYSTEM");
        printf("\n====================================");

        printf("\n1. Add New Book");
        printf("\n2. Update Book Details");
        printf("\n3. Remove Book");
        printf("\n4. Search Book");
        printf("\n5. View All Books");
        printf("\n6. Issue Book");
        printf("\n7. Return Book");
        printf("\n8. List Issued Books");
        printf("\n9. Save");
        printf("\n10. Exit");

        printf("\n\nEnter Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                addBook();
                break;

            case 2:
                updateBook();
                break;

            case 3:
                removeBook();
                break;

            case 4:
                searchBook();
                break;

            case 5:
                viewBooks();
                break;

            case 6:
                issueBook();
                break;

            case 7:
                returnBook();
                break;

            case 8:
                listIssuedBooks();
                break;

            case 9:
                saveBooks();
                printf("\nData Saved Successfully!\n");
                break;

            case 10:
                printf("\nThank You For Using Library Management System\n");
                printf("Program Exited Successfully\n");
                break;

            default:
                printf("\nInvalid Choice! Please Try Again.\n");
        }

    } while(choice != 10);

    return 0;
}
