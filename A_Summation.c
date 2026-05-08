#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    long long a[1000000];
    long long sum=0;
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        scanf("%lld", &a[i]);
    }
    for(int i=0; i<n; i++) {
        sum = a[i] + sum;
    }
    printf("%lld", llabs(sum));

}

