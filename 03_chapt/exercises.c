#include <stdio.h>

int main(void)
{
    // 4. 27 degree Fahrenheit to Celsius: c = (F-32) /1.8
    double temperatureC;
    int currentTempF = 27;

    temperatureC = (currentTempF - 32) / 1.8;
    printf("%i Fahrenheit converted to Celsius is %g\n", currentTempF, temperatureC);

    return 0;
}