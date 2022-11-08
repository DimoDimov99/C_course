#include <stdio.h>

int main() {
    int decimal_number, remainder;
    int i, j;
    char hexdecimal[100];

    printf("Enter decimal number: ");
    scanf("%d", &decimal_number);

    while (decimal_number != 0) {
        remainder = decimal_number % 16;

        if (remainder < 10) {
            hexdecimal[i] = 48 + remainder;
        }

        else {
            hexdecimal[i] = 55 + remainder;
        }

        decimal_number = decimal_number / 16;
        i++;
    }

    for (j = i; j >= 0; j--) {
        printf("%c", hexdecimal[j]);
    }

    printf("\n");
}