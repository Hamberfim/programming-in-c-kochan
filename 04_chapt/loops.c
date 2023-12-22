#include <stdio.h>

// calculate the 200the triangular number

int main()
{
    int num, triangularNum;
    triangularNum = 0;

    printf("=== Table of Triangular numbers ===\n");
    printf(" number       Sum from 1 to 'number'\n");
    printf("--------     ------------------------\n");

    for (int num = 1; num <= 200; num++)
    {
        triangularNum += num;

        // output a table of the numbers
        printf(" %2i           %i\n", num, triangularNum);
    }
    printf("The 200th triangular number is %i\n", triangularNum);

    return 0;
}