#include <stdio.h>
#include <cs50.h>

int main(void)
{
    float celsius = get_float("Enter temperature in Celsius: ");

    float fahrenheit = (celsius * 9.0 / 5.0) + 32;

    printf("%.2f Celsius is %.2f Fahrenheit\n", celsius, fahrenheit);

    return 0;
}
