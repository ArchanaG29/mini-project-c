#include <stdio.h>
#include "book.h"

extern struct Book books[100];
extern int bookCount;

void saveBooks()
{
    FILE *fp;
    fp=fopen("books.dat","wb");

    fwrite(&bookCount,sizeof(int),1,fp);
    fwrite(books,sizeof(struct Book),bookCount,fp);

    fclose(fp);

    printf("Data Saved\n");
}
