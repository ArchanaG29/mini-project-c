#include<stdio.h>
#include "header.h"

void save_books(BT *ptr)
{
    FILE *fp;

    fp = fopen("book.dat", "w");

    if(fp == NULL)
    {
        printf("Unable to open file\n");
        return;
    }

    fprintf(fp," ---------- ---------------------- ---------------------- ----------\n");
    fprintf(fp,"| BOOK ID  | TITLE                | AUTHOR               | QUANTITY |\n");
    fprintf(fp," ---------- ---------------------- ---------------------- ----------\n");

    while(ptr)
    {
        fprintf(fp,
                "| %-8d | %-20s | %-20s | %-8d |\n",
                ptr->bookid,
                ptr->title,
                ptr->author,
                ptr->quantity);

        ptr = ptr->next;
    }

    fprintf(fp," ---------- ---------------------- ---------------------- ----------\n");
    fclose(fp);

}

void load_books(BT **hptr)
{
    FILE *fp;
    BT *temp, *last;

    fp = fopen("book.dat","r");

    if(fp == NULL)
        return;

    while(1)
    {
        temp = (BT *)malloc(sizeof(BT));

        if(fscanf(fp,"%d %s %s %d",&temp->bookid,temp->title,temp->author,&temp->quantity) != 4)
        {
            free(temp);
            break;
        }

        temp->next = NULL;

        if(*hptr == NULL)
            *hptr = temp;
        else
        {
            last = *hptr;

            while(last->next)
                last = last->next;

            last->next = temp;
        }
    }

    fclose(fp);
}
