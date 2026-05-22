#include <stdio.h>

void print(float a) {
    printf("%.7f", a);
}

int main() {
    int n;
    scanf("%d", &n);
    float a[n];
    for(int i=0; i<n; i++) {
        scanf("%f", &a[i]);
    }
    float sum = 0;
    for(int i=0; i<n; i++) {
        sum = sum + a[i];
    }
    float r = sum / n;
    print(r);
}