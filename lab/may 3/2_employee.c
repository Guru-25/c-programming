// Employee payroll details and its operations

#include <stdio.h>
#include <string.h>

// creating structure
struct employee {
    char name[20];
    float bp, da, hra, it, gsal, net;
};

void main() {
    // getting employee details
    int n = 2, i;
    struct employee emp_no[n];
    for (i = 0; i < n; i++) {
        printf("Enter Name of Employee %d: ", i+1);
        scanf("%s", emp_no[i].name);
        printf("Enter Salary details (BP DA HRA) of Employee %d: ", i+1);
        scanf("%f %f %f", &emp_no[i].bp, &emp_no[i].da, &emp_no[i].hra);
        printf("Enter Income Tax of Employee %d: ", i+1);
        scanf("%f", &emp_no[i].it);
        // calculating GSAL and NetSAL of employees 
        emp_no[i].gsal = emp_no[i].bp + emp_no[i].da + emp_no[i].hra;
        emp_no[i].net = emp_no[i].gsal - emp_no[i].it;
        printf("\n");
    }

    // finding highest salary employee
    float highest = emp_no[0].net;
    char highName[20];
    for (i = 0; i < n; i++) {
        if (emp_no[i].net > highest) {
            highest = emp_no[i].net;
            strcpy(highName, emp_no[i].name);
        }
    }

    // printing employee details
    for (i = 0; i < n; i++) {
        printf("Name of Employee %d: %s\n", i + 1, emp_no[i].name);
        printf("Gross Salary Employee of %d: %.2f\n", i + 1, emp_no[i].gsal);
        printf("Net Salary of Employee %d: %.2f\n\n", i + 1, emp_no[i].net);
    }
    printf("Employee %s is having the highest salary of %.2f", highName, highest);
}