#include <stdio.h>
#include <stdlib.h>

void decimalToBinary(int decimal)
{
    // Array to store binary number
    int binary[32];

    // Counter for binary array
    int i = 0;

    // Convert decimal to binary
    while (decimal > 0) {
        binary[i] = decimal % 2; // % is Modulus
        decimal = decimal / 2;   // / is Division
        i++;
    }

    // Print binary array in reverse order
    printf("Binary equivalent: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
}

int main()
{
    int decimal;

    // Input decimal number
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    // Call function to convert decimal to binary
    decimalToBinary(decimal);

    return 0;
}
