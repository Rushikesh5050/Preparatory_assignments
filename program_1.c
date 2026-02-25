#include<stdio.h>

/*
Q1. Write a program to input n numbers on command line argument and
calculate maximum of them.
*/
#include <stdlib.h>   // for atoi()

int main(int argc, char *argv[])
{
    int i, max;

    // Check if at least one number is provided
    if (argc < 2)
    {
        printf("Usage: %s <num1> <num2> ... <numN>\n", argv[0]);
        return 1;
    }

    // Convert first argument to integer and assume it is maximum
    max = atoi(argv[1]);

    // Compare remaining numbers
    for (i = 2; i < argc; i++)
    {
        int num = atoi(argv[i]);

        if (num > max)
        {
            max = num;
        }
    }

    // Print maximum value
    printf("Maximum = %d\n", max);

    return 0;
}


//gcc program_1.c -o program_1
//./program_1 10 20 5 30 15
