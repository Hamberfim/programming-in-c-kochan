#include <stdio.h>

int main(void)
{
    float myFloat = 123.125, myFloat2;
    int myInt1, myInt2 = -150;

    myInt1 = myFloat; // float to int conversion
    printf("%f assigned to an int produces %i\n", myFloat, myInt1);

    myFloat = myInt2; // int to float conversion
    printf("%i assigned to a float produces %f\n", myInt2, myFloat);

    myFloat = myInt2 / 100; // int divided by int
    printf("%i divided by 100 produces %f\n", myInt2, myFloat);

    myFloat2 = myInt2 / 100.0; // int divided by float
    printf("%i divided by 100.0 produces %f\n", myInt2, myFloat2);

    myFloat2 = (float)myInt2 / 100; // type cast to float
    printf("(float) %i divided by 100 produces %f\n", myInt2, myFloat2);

    return 0;
}