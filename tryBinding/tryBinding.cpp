#include <stdio.h>
#include "print_functions.h"

void printInt(int value) {
    printf("Entered integer: %d\n", value);
}

void printFloat(float value) {
    printf("Entered floating-point number: %f\n", value);
}

void printChar(char value) {
    printf("Entered character: %c\n", value);
}

int main() {
    int intValue;
    float floatValue;
    char charValue;

    printf("Enter an integer: ");
    scanf_s("%d", &intValue);
    printInt(intValue);

    printf("\n");

    printf("Enter a floating-point number: ");
    scanf_s("%f", &floatValue);
    printFloat(floatValue);

    printf("\n");

    printf("Enter a character: ");
    scanf_s(" %c", &charValue);
    printChar(charValue);

    return 0;
}