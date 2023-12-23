#include <stdio.h>

int main() {
    double temperatureInFahrenheit, temperatureInCelsius;

    // Input temperature in Fahrenheit
    printf("Enter the temperature in Fahrenheit: ");
    scanf("%lf", &temperatureInFahrenheit);

    // Convert Fahrenheit to Celsius
    temperatureInCelsius = (temperatureInFahrenheit - 32) * 5 / 9;

    // Print the result
    printf("Temperature in Celsius: %.2f\n", temperatureInCelsius);

    return 0;
}
