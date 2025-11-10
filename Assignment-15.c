#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, D;
    double realPart, imagPart, root1, root2;

    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    D = b*b - 4*a*c;

    // Direct formulas 
    realPart = -b / (2*a);
    imagPart = sqrt(fabs(D)) / (2*a);

    root1 = realPart + imagPart * (D >= 0 ? 1 : 0);  // only adds if real root
    root2 = realPart - imagPart * (D >= 0 ? 1 : 0);

    // Printing based on discriminant type 
    printf("Root 1 = %.2lf + %.2lfi\n", realPart, (D >= 0 ? 0.0 : imagPart));
    printf("Root 2 = %.2lf - %.2lfi\n", realPart, (D >= 0 ? 0.0 : imagPart));

    return 0;
}
