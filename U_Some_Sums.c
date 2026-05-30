#include <stdio.h>

int main() {

    int n, a, b;
    scanf("%d %d %d", &n, &a, &b);
    int sum = 0;

    for(int i=1; i<=n; i++) {

        int temp = i;
        int digit = 0;

        for (; temp > 0; temp /= 10) {
            digit += temp % 10;
        }

        if(digit>=a && digit<=b) {
            sum = sum + i;
        }
    }

    printf("%d", sum);
    
}