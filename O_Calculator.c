#include <stdio.h>
#include <math.h>

int main() {
    int a, b;
    char c;
    int sum;
    scanf("%d%c%d", &a, &c, &b);
    if(c=='+') {
        sum = a + b;
        printf("%d", sum);
    } else if(c=='-') {
        sum = a - b;
        printf("%d", sum);
    } else if(c=='*') {
        sum = a * b;
        printf("%d", sum);
    } else if(c=='/') {
        sum = a / b;
        printf("%d", sum);
    }
}