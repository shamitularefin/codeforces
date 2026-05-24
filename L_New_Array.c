#include <stdio.h>

void scan(int *a) {
    scanf("%d", a);
}

void scanArr(int n, int a[]) {
    for(int i=0; i<n; i++) {
        scan(&a[i]);
    }
}

void addArr(int n, int a[], int b[], int c[]) {
    for(int i=0; i<n; i++) {
        c[i] = b[i];
    }

    int s = 0;

    for(int i=n; i<(n*2); i++) {
        c[i] = a[s];
        s++;
    }
}

void printArr(int n, int c[]) {
    for(int i=0; i<n; i++) {
        printf("%d ", c[i]);
    }
}

int main() {
    int n;
    scan(&n);
    int a[n], b[n];

    scanArr(n, a);
    scanArr(n, b);

    int c[2*n];

    addArr(n, a, b, c);

    printArr(2*n, c);

}