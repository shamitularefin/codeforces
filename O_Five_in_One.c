#include <stdio.h>

void max(int n, int a[]) {

    int max = a[0];

    for(int i=0; i<n; i++) {

        if(max<a[i]) {
            max = a[i];
        }

    }

    printf("The maximum number : %d\n", max);

}

void min(int n, int a[]) {

    int min = a[0];

    for(int i=0; i<n; i++) {

        if(min>a[i]) {
            min = a[i];
        }

    }

    printf("The minimum number : %d\n", min);

}

void prime(int n, int a[]) {

    int count = 0;

    for(int i = 0; i < n; i++) {

        if(a[i] < 2) {
            continue;
        }

        int isPrime = 1;

        for(int j = 2; j * j <= a[i]; j++) {

            if(a[i] % j == 0) {
                isPrime = 0;
                break;
            }
        }

        if(isPrime) {
            count++;
        }
    }

    printf("The number of prime numbers : %d\n", count);

}

void palindrome(int n, int a[]) {

    int count = 0;

    for(int i = 0; i < n; i++) {

        int original = a[i];
        int rev = 0;

        while(original > 0) {

            rev = rev * 10 + (original % 10);
            original /= 10;
            
        }

        if(rev == a[i]) {
            count++;
        }

    }

    printf("The number of palindrome numbers : %d\n", count);
}

void div(int n, int a[]) {

    int b[n];

    for(int i=0; i<n; i++) {

        int l = 0;

        for(int j=1; j<=a[i]; j++) {

            if(a[i]%j==0) {
                l++;
            }

        }

        b[i] = l;

    }

    int max = b[0];
    int p = 0;

    for(int i=0; i<n; i++) {

        if(max<b[i]) {
            max = b[i];
        }

    }

    for(int i=0; i<n; i++) {

        if(b[i]==max) {
            p++;
        }

    }

    int u[p];
    int y = 0;

    for(int i=0; i<n; i++) {

        if(b[i]==max) {

            u[y]=a[i];
            y++;

        }

    }

    int maxx = u[0];

    for(int i=0; i<p; i++) {

        if(maxx<u[i]) {
            maxx = u[i];
        }

    }

    printf("The number that has the maximum number of divisors : %d", maxx);

}

int main() {

    int n;
    scanf("%d", &n);

    int a[n];

    for(int i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }

    max(n, a);
    min(n, a);
    prime(n, a);
    palindrome(n, a);
    div(n, a);

    return 0;

}