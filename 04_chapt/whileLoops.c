#include <stdio.h>

// reverse the digits of a number using a while loop

int main()
{
    int number, right_number;

    printf("Enter the number you want to reverse:\n");
    scanf("%i", &number);

    while (number != 0)
    {
        right_number = number % 10;
        printf("%i", right_number);

        number /= 10;
    }

    printf("\n");

    return 0;
}