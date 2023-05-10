// Book details and the operations

#include <stdio.h>
#include <string.h>

// creating nested structure
struct dop {
    int date, month, year;
};

// creating structure
struct books {
    int book_id, cost, quantity;
    char book_name[20], author_name[20], pub_name[20];
    struct dop book_date;
} book_no[100];

void book_details(int n) {
    // getting book details
    int i = 0;
    for (i = 0; i < n; i++) {
        printf("Enter Book ID of Book no. %d: ", i + 1);
        scanf("%d", &book_no[i].book_id);
        printf("Enter Book Name of Book no. %d: ", i + 1);
        scanf("%s", book_no[i].book_name);
        printf("Enter Author Name of Book no. %d: ", i + 1);
        scanf("%s", book_no[i].author_name);
        printf("Enter Cost of Book no. %d: ", i + 1);
        scanf("%d", &book_no[i].cost);
        printf("Enter Publication Name of Book no. %d: ", i + 1);
        scanf("%s", book_no[i].pub_name);
        printf("Enter Date (Date Month Year) of Book no. %d: ", i + 1);
        scanf("%d %d %d", &book_no[i].book_date.date, &book_no[i].book_date.month, &book_no[i].book_date.year);
        printf("Enter Quantity of Book no. %d: ", i + 1);
        scanf("%d", &book_no[i].quantity);
        printf("\n");
    }
}

// finding high cost book
void costliest(int n) {
    int i, high = book_no[0].cost;
    char highBook[20];
    for (i = 0; i < n; i++) {
        if (book_no[i].cost > high) {
            strcpy(highBook, book_no[i].book_name);
        }
    }
    printf("Costliest book is %s", highBook);
}

// book name search
void title_search(int n) {
    int flag = 0, i;
    char title_search_var[20];
    printf("Enter the Title to search for: ");
    scanf("%s", title_search_var);
    for (i = 0; i < n; i++) {
        if (strcmp(title_search_var, book_no[i].book_name) == 0)
            flag = 1;
    }
    if (flag == 1)
        printf("%s is available", title_search_var);
    else
        printf("%s is not available", title_search_var);
}

// author name search
void author_search(int n) {
    int i, flag = 0;
    char author_search_var[20];
    printf("Enter Author name to search for: ");
    scanf("%s", author_search_var);
    for (i = 0; i < n; i++) {
        if (strcmp(author_search_var, book_no[i].author_name) == 0) {
            printf("%s\n", book_no[i].book_name);
            flag = 1;
        }
    }
    printf("\n");
    if (flag != 1)
        printf("No book is availabe from the given author");
}

// publication name search
void pub_search(int n) {
    int i, flag = 0;
    char pub_search_var[20];
    printf("Enter Publication name to search for: ");
    scanf("%s", pub_search_var);
    for (i = 0; i < 2; i++) {
        if (strcmp(pub_search_var, book_no[i].pub_name) == 0) {
            printf("%s\n", book_no[i].book_name);
            flag = 1;
        }
    }
    printf("\n");
    if (flag != 1)
        printf("No book is availabe from the given publication");
}

// year search
void year_search(int n) {
    int i, flag = 0, year_search_var;
    printf("Enter the year to search for: ");
    scanf("%d", &year_search_var);
    for (i = 0; i < 2; i++) {
        if (year_search_var == book_no[i].book_date.year) {
            printf("%s\n", book_no[i].book_name);
            flag = 1;
        }
    }
    if (flag != 1)
        printf("No book is availabe from the given year");
}

// main function
void main() {
    int num;
    printf("Enter the number of books (max is 100): ");
    scanf("%d", &num);
    printf("\n");
    book_details(num);
    costliest(num);
    printf("\n\n");
    title_search(num);
    printf("\n\n");
    author_search(num);
    pub_search(num);
    year_search(num);
}
