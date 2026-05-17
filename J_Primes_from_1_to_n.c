#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for(int i=2; i<=n; i++) {

        int prime = 1;
        
        if(i==2) {
            printf("2 ");
            continue;
        }

        for(int j=2; j<i; j++) {

            if(i%j==0) {
                prime = 0;
                break;
            }
        }

        if(prime) {
            printf("%d ", i);
        }
    }
}