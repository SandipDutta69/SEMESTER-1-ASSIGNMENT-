#include <stdio.h>

int main() {
    int num1, lastDigit1;
    printf("Enter an integer: ");
    scanf("%d", &num1);

    lastDigit1 = num1 % 10;   
    if(lastDigit1 < 0) lastDigit1 = -lastDigit1; 

    printf("Last digit (using modulus) = %d\n", lastDigit1);



     int num2, lastDigit2;
    printf("Enter an integer: ");
    scanf("%d", &num2);

    lastDigit2 = num2 - (num2 / 10) * 10; 
    if(lastDigit2 < 0) lastDigit2 = -lastDigit2;

    printf("Last digit (without modulus) = %d\n", lastDigit2);

    return 0;
}




