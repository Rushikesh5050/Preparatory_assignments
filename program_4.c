/*
Q4. Write a program to calculate the grade of a student. There are five
subjects. Marks in each subject are entered from keyboard. Assign grade
based on the following rule:
Total Marks >= 90 Grade: Ex
90 > Total Marks >= 80 Grade: A
80 > Total Marks >= 70 Grade: B
70 > Total Marks >= 60 Grade: C
60 > Total Marks Grade: F
*/

#include <stdio.h>

int main() {
    float m1, m2, m3, m4, m5, total, percentage;

    // Input marks of 5 subjects
    printf("Enter marks of 5 subjects:\n");
    scanf("%f %f %f %f %f", &m1, &m2, &m3, &m4, &m5);

    // Calculate total and percentage
    total = m1 + m2 + m3 + m4 + m5;
    percentage = total / 5;

    printf("Total Marks = %.2f\n", total);
    printf("Percentage = %.2f\n", percentage);

    // Assign grade
    if (percentage >= 90)
        printf("Grade: Ex");
    else if (percentage >= 80)
        printf("Grade: A");
    else if (percentage >= 70)
        printf("Grade: B");
    else if (percentage >= 60)
        printf("Grade: C");
    else
        printf("Grade: F");

    return 0;
}