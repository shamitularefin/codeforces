#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

    int a[n][n];

    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    int j=0;
    int sum1 = 0;

    for(int i=0; i<n && j<n; i++) {
        sum1 = sum1 + a[i][j];
        j++;
    }

    int k=n;
    int sum2 = 0;

    for(int i=0; i<n && k>=0; i++) {
        sum2 = sum2 + a[i][k-1];
        k--;
    }

    int sum = sum1 - sum2;

    printf("%d\n", abs(sum));
}