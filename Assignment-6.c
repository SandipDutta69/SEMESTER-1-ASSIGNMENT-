#include<stdio.h>

int main(){

float principle,rate,time,simpleInterest;
printf("Enter your principle :");
scanf("%f" ,&principle);

printf("Enter your rate (in %%):");
scanf("%f" ,&rate);

printf("Enter your time (in years) :");
scanf("%f" ,&time);

simpleInterest = ((principle*rate*time)/100);
printf("Your Interest is = %.2f \n" , simpleInterest);

    return 0 ;
}