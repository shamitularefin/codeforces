#include <stdio.h>

int main() {
    int n;
    int s=0;
    scanf("%d", &n);
    for(int i=1; i<13; i++) {
        s = n * i;
        printf("%d * %d = %d\n", n, i, s);
    }
}