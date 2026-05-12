#include <stdio.h>

int main() {
    for(; ; ) {
        int f, l;
        scanf("%d %d", &l, &f);
        if (l <= 0 || f <= 0) {
            break;
        }
        int sum = 0;
        if(f<l) {
            for(int j=f; j<=l; j++) {
            sum = sum + j;
            printf("%d ", j);
        }
        } else {
            for(int j=l; j<=f; j++) {
            sum = sum + j;
            printf("%d ", j);
        }
        }
        printf("sum =%d\n", sum);
    }
}