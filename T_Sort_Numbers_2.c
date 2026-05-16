#include <stdio.h>

int main() {
    int a[3];
    int b[3];

    for(int i=0; i<3; i++) {
        scanf("%d", &a[i]);
    }

    for(int i=0; i<3; i++) {
        b[i] = a[i];
    }

    for(int i=0; i<3; i++) {
        for(int j=0; j<2; j++) {
            if(b[j]>b[j+1]) {
                int temp = b[j+1];
                b[j+1] = b[j];
                b[j] = temp;
            }
        }
    }

    for(int i=0; i<3; i++) {
        printf("%d\n", b[i]);
    }
    
    printf("\n");

    for(int i=0; i<3; i++) {
        printf("%d\n", a[i]);
    }
}