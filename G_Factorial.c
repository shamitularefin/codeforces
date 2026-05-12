#include <stdio.h>

int main() {
    int t, n;
    scanf("%d", &t);
    for(int i=0; i<t; i++) {
        scanf("%d", &n);
        // if(n==0 || n==1){
        //   printf("%d\n", 1);
        //   return 0;
        // }
        long long fact=1;
        for(int j=1; j<=n; j++) {
            fact = fact * j;
        }
        printf("%lld\n", fact);
    }
    return 0;
}