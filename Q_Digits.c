#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for(int i=0; i<n; i++) {
        int s;
        scanf("%d", &s);
        if(s==0) {
            printf("0");
        }
        while(s>0) {
            printf("%d ", s % 10);
            s = s / 10;
        }
        printf("\n");
    }
}