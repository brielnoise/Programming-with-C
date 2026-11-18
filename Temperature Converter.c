/*
celsiusToFahrenheit() Converts Celsius to Fahrenheit.

fahrenheitToCelsius() – Converts Fahrenheit to Celsius.

displayTemperature() – Displays the conversion result.
*/
#include <stdio.h>
float celsiusToFahrenheit(float C);
float fahrenheitToCelsius(float F);
void displayTemperature(float C, float F);

float celsiusToFahrenheit(float C){
    return (C * 9.0/5.0) + 32;
}
float fahrenheitToCelsius(float F){
    return (F - 32) * 5.0/9.0;
}
void displayTemperature(float C, float F){
    printf("\n--- Temperature Conversion Result ---\n");
    printf("%.2f degrees Celsius is equal to %.2f degrees Fahrenheit.\n", C, F);
}

int main() {
    float Fahrenheit, Celsius;

    printf("Enter Celsius: ");
    scanf("%f", &Celsius);

    Fahrenheit = celsiusToFahrenheit(Celsius);
    displayTemperature(Celsius, Fahrenheit);
    return 0;
}
