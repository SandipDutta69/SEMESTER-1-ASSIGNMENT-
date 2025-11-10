#include <stdio.h>

int main(){

float x,y;
printf("enter your temperature in celsius :");
scanf("%f" ,&x);
y = ((x*9)/5)+32;
printf("your fahrenheit value : %.2f \n" ,y);


printf("enter your temperature in fahrenheit :");
scanf("%f" ,&y);
x = ((y-32)*5)/9;
printf("your celsius value : %.2f \n" ,x);


    return 0;
}