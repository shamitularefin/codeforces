#include <stdio.h>

int main(){

    int t;
    scanf("%d", &t);

    for(int w=0; w<t; w++){
        int n;
        scanf("%d", &n);
        int a[n];
        int b[n];

        for(int i=0; i<n; i++) {
            scanf("%d", &a[i]);
        }

        int m = 0;
        int ok = 1;

        for(int i=1; i<n; i++) {
            if(a[i] < a[i-1]) {
                ok = 0;
                b[m] = i + 1;
                m++;
            }
        }

        int sum = 0;
        int x = 0;

        if(ok == 1) {
            sum = n * (n + 1) / 2;
        } else {
            
            x = b[0] - 1;
            sum = x * (x + 1) / 2;

            
            for(int i=1; i<m; i++) {
                x = b[i] - b[i-1];
                sum += x * (x + 1) / 2;
            }

            
            x = n - b[m-1] + 1;
            sum += x * (x + 1) / 2;
        }

        printf("%d\n", sum);
    }

    return 0;
}