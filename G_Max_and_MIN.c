#include <stdio.h>

void max(int n, int a[]);
void min(int n, int a[]);

void max(int n, int a[]) {

    int mx = a[0];

    for(int i=0; i<n; i++) {
        if(mx<a[i]) {
            mx = a[i];
        }
    }

    printf("%d", mx);

}

void min(int n, int a[]) {

    
        int mn = a[0];
    
    for(int i=0; i<n; i++) {
        if(mn>a[i]) {
            mn = a[i];
        }
    }

    printf("%d", mn);

}

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }
    
    min(n, a);
    printf(" ");
    max(n, a);

}