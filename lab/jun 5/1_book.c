#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char title[100];
    char author[100];
    float price;
    int year;
    char category[50];
} Book;

void displayBookDetails(Book book) {
    printf("Title: %s\n", book.title);
    printf("Author: %s\n", book.author);
    printf("Price: %.2f\n", book.price);
    printf("Year: %d\n", book.year);
    printf("Category: %s\n", book.category);
    printf("------------------------\n");
}

void displayAllBooks(Book books[], int numBooks) {
    int i;
    for (i = 0; i < numBooks; i++) {
        displayBookDetails(books[i]);
    }
}

void displayBooksByCategory(Book books[], int numBooks, const char* category) {
    int i;
    printf("Books in the category '%s':\n", category);
    for (i = 0; i < numBooks; i++) {
        if (strcmp(books[i].category, category) == 0) {
            displayBookDetails(books[i]);
        }
    }
}

void findCostliestBook(Book books[], int numBooks) {
    float maxPrice = 0.0;
    int maxIndex = -1;
    int i;

    for (i = 0; i < numBooks; i++) {
        if (books[i].price > maxPrice) {
            maxPrice = books[i].price;
            maxIndex = i;
        }
    }

    if (maxIndex != -1) {
        printf("Costliest book:\n");
        displayBookDetails(books[maxIndex]);
    }
}

void displayBooksByAuthor(Book books[], int numBooks, const char* author) {
    int i;
    printf("Books by author '%s':\n", author);
    for (i = 0; i < numBooks; i++) {
        if (strcmp(books[i].author, author) == 0) {
            displayBookDetails(books[i]);
        }
    }
}

void displayBooksPublishedOnOrBeforeYear(Book books[], int numBooks, int year) {
    int i;
    printf("Books published on or before %d:\n", year);
    for (i = 0; i < numBooks; i++) {
        if (books[i].year <= year) {
            displayBookDetails(books[i]);
        }
    }
}

int main() {
    FILE* file = fopen("book_details.txt", "w");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    Book books[10];
    int i;

    for (i = 0; i < 10; i++) {
        printf("Enter details for Book %d:\n", i + 1);
        printf("Title: ");
        scanf("%s", books[i].title);
        printf("Author: ");
        scanf("%s", books[i].author);
        printf("Price: ");
        scanf("%f", &(books[i].price));
        printf("Year: ");
        scanf("%d", &(books[i].year));
        printf("Category: ");
        scanf("%s", books[i].category);

        fprintf(file, "%s,%s,%.2f,%d,%s\n", books[i].title, books[i].author, books[i].price, books[i].year, books[i].category);
    }

    fclose(file);

    // Retrieving book details from the file
    file = fopen("book_details.txt", "r");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    Book retrievedBooks[10];
    char buffer[256];
    i = 0;

    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        sscanf(buffer, "%[^,],%[^,],%f,%d,%s\n", retrievedBooks[i].title, retrievedBooks[i].author, &(retrievedBooks[i].price), &(retrievedBooks[i].year), retrievedBooks[i].category);
        i++;
    }

    fclose(file);

    // Perform operations on the retrieved book details
    printf("All Book details:\n");
    displayAllBooks(retrievedBooks, 10);

    displayBooksByCategory(retrievedBooks, 10, "Fiction");

    findCostliestBook(retrievedBooks, 10);

    displayBooksByAuthor(retrievedBooks, 10, "J.K. Rowling");

    displayBooksPublishedOnOrBeforeYear(retrievedBooks, 10, 2000);

    return 0;
}