#include <stdio.h>

int main() {
    
    int n;
    scanf("%d", &n);

    int a[n];

    for(int i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }

    int count = 0;

    int f = 1;

    while(f == 1){

        f = 1;

        for(int i = 0; i < n; i++) {
            if(a[i] % 2 != 0) {
                f = 0;
                break;
            }
        }

        if(f == 1) {
            count++;
            for(int i=0; i<n; i++){
                a[i] = a[i] / 2;
            }
        }
        
    }

    printf("%d", count);
    
}