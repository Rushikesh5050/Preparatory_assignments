#include <stdio.h>
#include <string.h>
// Q11. Define a structure emp with members fname, lname and salary. 
//Write a program to initialize the details of an employee and display it. Also write a function to modify the



// Define structure
struct emp {
    char fname[50];
    char lname[50];
    double salary;
};

// Function to initialize employee details
void emp_init(struct emp* e) {
    printf("Enter First Name: ");
    scanf("%s", e->fname);

    printf("Enter Last Name: ");
    scanf("%s", e->lname);

    printf("Enter Monthly Salary: ");
    scanf("%lf", &e->salary);
}

// Function to modify salary
void set_salary(struct emp *e, double sal) {
    e->salary = sal;
}

// Function to display employee details
void emp_display(struct emp *e) {
    printf("\nEmployee Details:\n");
    printf("First Name : %s\n", e->fname);
    printf("Last Name  : %s\n", e->lname);
    printf("Salary     : %.2lf\n", e->salary);
}

int main() {
    struct emp e1;

    // Initialize employee
    emp_init(&e1);

    // Display original details
    emp_display(&e1);

    // Modify salary
    double new_salary;
    printf("\nEnter New Salary to Update: ");
    scanf("%lf", &new_salary);

    set_salary(&e1, new_salary);

    // Display updated details
    emp_display(&e1);

    return 0;
}