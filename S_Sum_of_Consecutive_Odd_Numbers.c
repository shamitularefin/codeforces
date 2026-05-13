#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    for(int i=0; i<t; i++) {
        int a, b;
        scanf("%d %d", &a, &b);
        int z = 0;
        if(a>b) {
            for(int j=b+1; j<a; j++) {
            if((j%2)!=0) {
                z = z + j;
            }
        }
        } else {
            for(int j=a+1; j<b; j++) {
            if((j%2)!=0) {
                z = z + j;
            }
        }
        }
        printf("%d\n", z);
    }
}