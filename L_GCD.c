#include <stdio.h>
#include <math.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int GCD;
    int min;
    if(a>b) {
        min = b;
    } else {
        min = a;
    }
        for(int i=1; i<=min; i++) {
            if(a%i==0 && b%i==0) {
                GCD = i;
            }
        }
    printf("%d\n", GCD);
}