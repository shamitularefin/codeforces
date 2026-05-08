#include <stdio.h>
#include <math.h>

int main() {
    double x;
    scanf("%lf", &x);
    double y = x * 1000;
    double z = fmod(y, 1000);
    double a = z/1000;
    double b = y-z;
    double c = b/1000;
    if(z == 000) {
        printf("int %g", c);
    } else {
        printf("float %g %g", c, a);
    }
}