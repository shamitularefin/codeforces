#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int t = n;
    int l, k=0, m;

    for(; t>0; ) {
        l = t % 10;
        
        k = l + k*10;
        t = t / 10;
    }
    printf("%d\n", k);
    if(n==k) {
        printf("YES");
    } else {
        printf("NO");
    }
}