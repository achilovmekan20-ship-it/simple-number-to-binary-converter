#include <stdio.h>

int main() {

    int number;
    int binary[32];
    int i = 0;

    printf("Enter a decimal number which want to turn in binary : ");
    scanf("%d", &number);
    //the loop which divide input number to 2 each answer until 1 or 0
    while (number > 0) {        
        binary[i] = number % 2;  //give binary[0]=mod of first number 
        number = number / 2;     //preapring and give "number" new value
        i++; //increase i +1 for new binary digit 
    }

    printf("Binary: ");
    //here another loop which turns over answers 
    for (int x = i - 1; x >= 0; x--) {
        printf("%d", binary[x]);
    }

    printf("\n");

    return 0;
}