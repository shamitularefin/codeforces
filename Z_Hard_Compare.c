#include <stdio.h>
#include <math.h>

int main() {

    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    double x = b * log(a);
    double y = d * log(c);

    if(x>y) {

        printf("YES");

    } else {

        printf("NO");

    }

}