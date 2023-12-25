#include <stdio.h>

int main(void)
{
    // calc absolute value
    int number;

    printf("Enter your number: \n");
    scanf("%i", &number);

    if (number < 0)
    {
        number = -number;
    }

    printf("The absolute value is %i\n", number);

    return 0;
}