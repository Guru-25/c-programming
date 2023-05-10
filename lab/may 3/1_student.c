/*
- create student/employee details using struct in C(atleast 5 students, marks for 5 subjects)
- print details of a given student name (get student name from user)
- search if there is any student with the name "John". (John has to be obtained from the user)
- sort the details using students/ employees names
- calculate total mark for each student, find the Top scorer 
- print the class average */

#include <stdio.h>
#include <string.h>

// creating struct
struct student {
    char name[20];
    float mark[5], total;
};

void main() {
    // getting students details
    int n = 5, sub = 5, i, j;
    struct student student_no[n];
    for (i = 0; i < n; i++) {
        printf("Enter Name of Student %d: ", i + 1);
        scanf("%s", student_no[i].name);
        // calculating total of each student
        student_no[i].total = 0;
        for (j = 0; j < sub; j++) {
            printf("Enter Subject %d Mark of Student %d: ", j + 1, i + 1);
            scanf("%f", &student_no[i].mark[j]);
            student_no[i].total += student_no[i].mark[j];
        }
        printf("\n");
    }
    
    // printing students details
    for (i = 0; i < n; i++) {
        printf("Name of Student %d: %s\n", i + 1, student_no[i].name);
        for (j = 0; j < sub; j++) {
            printf("Subject %d Mark of Student %d: %.2f\n", j + 1, i + 1, student_no[i].mark[j]);
        }
        printf("Total marks of Student %d: %.2f\n\n", i + 1, student_no[i].total);
    }

    // searching student
    char search[20];
    int flag = 0;
    printf("Enter a Name to search for: ");
    scanf("%s", search);
    for (i = 0; i < n; i++) {
        if (strcmp(student_no[i].name, search) == 0) {
            printf("%s is in name list\n\n", search);
            flag = 1;
        }
    }
    if (flag == 0)
        printf("%s is not in name list\n\n", search);

    // Sort Code here

    // Top Scorer
    float top = student_no[0].total;
    char topName[20];
    for (i = 0; i < n; i++) {
        if (student_no[i].total > top) {
            top = student_no[i].total;
            strcpy(topName, student_no[i].name);
        }
    }
    printf("Top Scorer is Student %s whose Total is %.2f\n\n", topName, top);

    // Class Average
    float classTotal = 0;
    for (i = 0; i < n; i++) {
        classTotal += student_no[i].total;
    }
    printf("Class Average is %.2f", classTotal / n);
}