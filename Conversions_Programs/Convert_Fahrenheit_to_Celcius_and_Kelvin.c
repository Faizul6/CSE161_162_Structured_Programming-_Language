#include <stdio.h>
int main() {
    float fah, cel, kel;
    printf("temperature in Fahrenheit: ");
    scanf("%f", &fah);

    cel = (fah - 32) * 5 / 9;
    kel = cel + 273.15;

    printf("In Fahrenheit: %f\n", fah);
    printf("In Celsius: %f\n", cel);
    printf("In Kelvin: %f", kel);

    return 0;
}
