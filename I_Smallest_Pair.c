#include <stdio.h>

int main() {
    int t, n;
    scanf("%d", &t);

    for(int k=0; k<t; k++) {
        scanf("%d", &n);
        int a[n];
        for(int i=0; i<n; i++) {
        scanf("%d", &a[i]); 
        }
        int v;
        int min = 100000000;
        for(int i=0; i<n; i++) {
            for(int j=i+1; j<n; j++) {
                v = a[i] + a[j] + j - i;
                if(min>v) {
                min = v;
                }
            }
        }
        
        printf("%d\n", min);
    }
}