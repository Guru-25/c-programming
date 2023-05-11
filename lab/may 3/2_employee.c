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
    struct employee emp[n];
    for (i = 0; i < n; i++) {
        printf("Enter Name of Employee %d: ", i+1);
        scanf("%s", emp[i].name);
        printf("Enter Salary details (BP DA HRA) of Employee %d: ", i+1);
        scanf("%f %f %f", &emp[i].bp, &emp[i].da, &emp[i].hra);
        printf("Enter Income Tax of Employee %d: ", i+1);
        scanf("%f", &emp[i].it);
        // calculating GSAL and NetSAL of employees 
        emp[i].gsal = emp[i].bp + emp[i].da + emp[i].hra;
        emp[i].net = emp[i].gsal - emp[i].it;
        printf("\n");
    }

    // finding highest salary employee
    float highest = emp[0].net;
    char highName[20];
    for (i = 0; i < n; i++) {
        if (emp[i].net > highest) {
            highest = emp[i].net;
            strcpy(highName, emp[i].name);
        }
    }

    // printing employee details
    for (i = 0; i < n; i++) {
        printf("Name of Employee %d: %s\n", i + 1, emp[i].name);
        printf("Gross Salary of Employee %d: %.2f\n", i + 1, emp[i].gsal);
        printf("Net Salary of Employee %d: %.2f\n\n", i + 1, emp[i].net);
    }
    printf("Employee %s is having the highest salary of %.2f", highName, highest);
}