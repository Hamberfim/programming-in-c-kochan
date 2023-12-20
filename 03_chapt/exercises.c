#include <stdio.h>
#include <math.h>

int main(void)
{
    // 4.) 27 degree Fahrenheit to Celsius: c = (F-32) /1.8
    double temperatureC;
    int currentTempF = 27;

    temperatureC = (currentTempF - 32) / 1.8;
    printf("%i Fahrenheit converted to Celsius is %g\n", currentTempF, temperatureC);

    // 6.) evaluate: 3x to the 3rd pow minus 5x to the 2nd pow plus 6 where x = 2.55

    double x = 2.55;
    double threeX = 3 * x;
    double fiveX = 5 * x;

    double powThreeX = pow(threeX, 3);
    double powFiveX = pow(fiveX, 2);

    double result = ((powThreeX) - (powFiveX)) + 6;
    printf("3x to the 3rd pow minus 5x to the 2nd pow, plus 6 is %g\n", result);

    // seems there isn't an answer key to check my work.

    return 0;
}