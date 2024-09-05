#include <stdio.h>

void convertTemperature(double temp, char unit);

int main() {
    double temp;
    char unit;

    printf("Enter temperature value: ");
    scanf("%lf", &temp);

    printf("Enter unit of measurement (C for Celsius, F for Fahrenheit, K for Kelvin): ");
    scanf(" %c", &unit);

    convertTemperature(temp, unit);

    return 0;
}

void convertTemperature(double temp, char unit) {
    double celsius, fahrenheit, kelvin;

    switch(unit) {
        case 'C':
        case 'c':
            celsius = temp;
            fahrenheit = (celsius * 9/5) + 32;
            kelvin = celsius + 273.15;
            printf("Temperature in Celsius: %.2lf degree C\n", celsius);
            printf("Temperature in Fahrenheit: %.2lf degree F\n", fahrenheit);
            printf("Temperature in Kelvin: %.2lf K\n", kelvin);
            break;

        case 'F':
        case 'f':
            fahrenheit = temp;
            celsius = (fahrenheit - 32) * 5/9;
            kelvin = celsius + 273.15;
            printf("Temperature in Celsius: %.2lf degree C\n", celsius);
            printf("Temperature in Fahrenheit: %.2lf degree F\n", fahrenheit);
            printf("Temperature in Kelvin: %.2lf K\n", kelvin);
            break;

        case 'K':
        case 'k':
            kelvin = temp;
            celsius = kelvin - 273.15;
            fahrenheit = (celsius * 9/5) + 32;
            printf("Temperature in Celsius: %.2lf degree F\n", celsius);
            printf("Temperature in Fahrenheit: %.2lf degree F\n", fahrenheit);
            printf("Temperature in Kelvin: %.2lf K\n", kelvin);
            break;

        default:
            printf("Invalid unit of measurement. Please enter C, F, or K.\n");
            break;
    }
}
