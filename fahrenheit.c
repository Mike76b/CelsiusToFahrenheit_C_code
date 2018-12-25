#include <stdio.h>
#include <cs50.h>

int main(void)
{
    float C = get_float("Enter Celsius degrees: "); // initializing Celsius variable
    float F = ((C * 9) / 5) + 32; // initializing the Fahrenheit conversion
    printf("Temperature in Fahrenheit degrees is: %.1f\n", F); // printing the result
}
