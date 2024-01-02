#include <stdio.h>
#include <stdlib.h>

void printhelp(char progname[]);

int main(int argc, char *argv[])
{
    int sum = 0;
    // sanity check
    if (argc == 1)
    {
        printhelp(argv[0]);
        return 1;
    }

    for (int i = 0; i < argc; i++)
    {
        sum = sum + atoi(argv[i]);
    }

    printf("Total sum is %i\n", sum);

    return 0;
}

void printhelp(char progname[])
{
    printf("%s integer ... \n", progname);
    printf("This program takes any number of\nintger values and sums them\n");
}