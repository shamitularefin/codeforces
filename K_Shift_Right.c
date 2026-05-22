#include <stdio.h>

int main() {
    int n, t;
    scanf("%d %d", &n, &t);
    int a[n];

    for(int i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }

    for(int i=0; i<t; i++) {

        int temp = a[n-1];

        for(int k=n-1; k>0; k--) {
                
                a[k] = a[k-1];

        }

        a[0] = temp;

    }

    for(int i=0; i<n; i++) {
        printf("%d ", a[i]);
    }

}