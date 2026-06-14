#ifndef BOOK_H
#define BOOK_H

/* Book Structure */
struct Book
{
    int id;
    char title[50];
    char author[50];
    int quantity;
};

/* Issue Structure */
struct Issue
{
    int bookId;
    int userId;
    char userName[50];
};

/* Global Variables */
extern struct Book books[100];
extern int bookCount;

extern struct Issue issued[100];
extern int issueCount;

/* Function Prototypes */
void addBook();
void updateBook();
void removeBook();
void searchBook();
void viewBooks();
void issueBook();
void returnBook();
void listIssuedBooks();
void saveBooks();

#endif
