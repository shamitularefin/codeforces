#include <stdio.h>

int main() {
    int n;
    for(; ; ) {
        scanf("%d", &n);
        if(n==1999) {
            printf("Correct\n");
            break;
        } else {
            printf("Wrong\n");
        }
    }
}