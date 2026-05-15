#include <stdio.h>

void yes() {
    printf("YES\n");
}

void no() {
    printf("NO\n");
}

int main() {
    int t;
    scanf("%d", &t);

    for(int k = 0; k < t; k++) {
        int n;
        int prime = 1;

        scanf("%d", &n);

        if(n < 2) {
            prime = 0;
        } else {
            for(int i = 2; i * i <= n; i++) {
                if(n % i == 0) {
                    prime = 0;
                    break;
                }
            }
        }

        if(prime) {
            yes();
        } else {
            no();
        }
    }

    return 0;
}