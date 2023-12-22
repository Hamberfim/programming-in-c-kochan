#include <stdio.h>

// calculate the 200the triangular number

int main()
{
    int n, num, triangularNum;
    triangularNum = 0;
    printf("What triangular number do you want to determine?\n");
    scanf("%i", &num);

    printf("=== Table of Triangular numbers ===\n");
    printf(" number       Sum from 1 to 'number'\n");
    printf("--------     ------------------------\n");

    for (int n = 1; n <= num; n++)
    {
        triangularNum += n;

        // output a table of the numbers
        printf(" %2i           %i\n", n, triangularNum);
    }
    printf("The %i triangular number is %i\n", num, triangularNum);

    return 0;
}