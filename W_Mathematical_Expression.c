#include <stdio.h>
#include <math.h>

int main() {
    int x, y, z;
    char a, b;
    scanf("%d %c %d %c %d", &x, &a, &y, &b, &z);
    if(a == '+') {
        int k = x + y;
        if(k == z) {
            printf("Yes");
        } else {
            printf("%d", k);
        }
    } else if(a == '-') {
        int l = x - y;
        if(l == z) {
            printf("Yes");
        } else {
            printf("%d", l);
        }
    } else if(a == '*') {
        int m = x * y;
        if(m == z) {
            printf("Yes");
        } else {
            printf("%d", m);
        }
    }
}