#include <stdio.h>
#include <math.h>

int main() {
    float a, b;
    scanf("%f %f", &a, &b);
    float sum = a / b;
    printf("floor %g / %g = %g\n", a, b, floor(sum));
    printf("ceil %g / %g = %g\n", a, b, ceil(sum));
    printf("round %g / %g = %g", a, b, round(sum));
}