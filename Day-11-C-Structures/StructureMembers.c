#include <stdio.h>
#include <string.h>

struct Books {
   char  title[50];
   char  author[50];
   char  subject[100];
   int   book_id;
};

int main(){

    struct Books Book1;        /* Declare Book1 of type Book */
    struct Books Book2;        /* Declare Book2 of type Book */

        /* book 1 specification */
        strcpy( Book1.title, "C Programming");
        strcpy( Book1.author, "p4n"); 
        strcpy( Book1.subject, "codewithpankaj");
        Book1.book_id = 6495407;

        /* print Book1 info */
        printf( "Book 1 title : %s\n", Book1.title);
        printf( "Book 1 author : %s\n", Book1.author);
        printf( "Book 1 subject : %s\n", Book1.subject);
        printf( "Book 1 book_id : %d\n", Book1.book_id);

        /* book 2 specification */
        strcpy( Book2.title, "CWP C programming");
        strcpy( Book2.author, "cwp"); 
        strcpy( Book2.subject, "c tutorial");
        Book2.book_id = 1001;

        /* print Book2 info */
        printf( "Book 2 title : %s\n", Book2.title);
        printf( "Book 2 author : %s\n", Book2.author);
        printf( "Book 2 subject : %s\n", Book2.subject);
        printf( "Book 2 book_id : %d\n", Book2.book_id);

    return 0;
}