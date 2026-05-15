#include <stdio.h>

void print(int a) {
    printf("%d", a);
}

int main() {
    int n;
    scanf("%d", &n);
    for(int i=1; i<(n+1); i++) {
        if(i > 1) {
            printf(" ");
        }
        print(i);
    }
    return 0;
}