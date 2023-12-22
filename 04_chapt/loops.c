#include <stdio.h>

// calculate the 200the triangular number

int main()
{
    int num, triangularNum;
    triangularNum = 0;

    for (int num = 1; num <= 200; num = num + 1)
    {
        triangularNum = triangularNum + num;
    }
    printf("The 200th triangular number is %i\n", triangularNum);

    return 0;
}