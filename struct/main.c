#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//C struct demo
struct Books
{
    char title[50];
    char author[50];
    char subject[50];
    int book_id;
};

// declare function
void printBook(struct Books books);

void printBook_point(struct Books *books);
int main1()
{
    struct Books book1;
    struct Books book2;
    strcpy(book1.title, "C programming");
    strcpy(book2.title, "JAVA programming");
    printBook(book1);
    printBook(book2);
    printBook_point(&book1);
    printBook_point(&book2);
    return 0;
}

// books as parameter
void printBook(struct Books books) {

    printf("book title is %s\n", books.title);
}

//parameter is Books point
void printBook_point(struct Books *books) {

    //
    printf("books title point address %s\n", books->title);
}
