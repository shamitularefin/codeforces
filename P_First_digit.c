#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int z = n / 1000;
    if(z%2==0) {
        printf("EVEN");
    } else {
        printf("ODD");
    }
}