#include <stdio.h>
#include <math.h>


int main() {

    double principal, rate, time, CI;
    printf("Enter Principal : ");
    scanf("%lf", &principal);

    printf("Enter rate : ");
    scanf("%lf" , &rate);

    printf("Enter time : ");
    scanf("%lf" , &time);

    CI = principal * pow((1 + rate / 100), time) - principal;

    printf("Compound Interest = %.2lf\n", CI);
    return 0;
}
