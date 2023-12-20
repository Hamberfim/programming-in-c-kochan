#include <stdio.h>

int main()
{

    float f1 = 29.33;
    double d1 = 1.99;
    int i1 = 9;

    printf("%f cast to an int is %i\n", f1, (int)f1);
    printf("%f cast to an int is %i\n", d1, (int)d1);
    printf("%i cast to a float is %f\n", i1, (float)i1);
    printf("%i cast to a double is %f\n", i1, (double)i1);

    return 0;
}