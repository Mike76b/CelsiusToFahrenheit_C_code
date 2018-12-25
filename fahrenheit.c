#include <stdio.h>
#include <cs50.h>

int main(void)
{
    float C = get_float("C: "); // initializing Celsius variable
    float F = ((C * 9) / 5) + 32; // initializing the Fahrenheit conversion
    printf("F: %.1f\n", F); // printing the result
}