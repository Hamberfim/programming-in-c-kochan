// quick review of data types
#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int intVar = 100;
    float floatVar = 331.79;     // default to 6 value places - rounded
    double doubleVar = 8.44e+11; // 8.44 time 10 to the 11th power - scientific notation - to 6 value places - rounded
    char charVar = 'W';

    _Bool boolVar = 0; // false

    printf("intVar = %i\n", intVar);
    printf("floatVar = %f\n", floatVar);   // default to 6 value places - rounded
    printf("doubleVar = %e\n", doubleVar); // 8.44 time 10 to the 11th power - scientific notation - to 6 value places - rounded
    printf("doubleVar = %g\n", doubleVar); // auto chooses between %f and %e trimming trailing zeros
    printf("charVar = %c\n", charVar);
    printf("boolVar = %i\n", boolVar);

    // type specifiers for int, double, float
    long int longVar;                              // system dependant but usually at least 32bits
    long long int maxAllowedStorage = longVar * 3; // system dependant but usually at least 64bits
    short int shortVar;                            // system dependant but usually at least 16bits
    unsigned unsignedVar;                          // only positive numbers

    return 0;
}