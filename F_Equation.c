#include <stdio.h>
#include <math.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    long long sum = 0;
    long long p;
    for(int i=2; i<=m; i=i+2) {
        p = pow(n, i)+0.5;
        sum = sum + p;
    }
    printf("%lld", sum);
}