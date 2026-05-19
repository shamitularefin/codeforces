#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    for(int i=0; i<t; i++) {
        int n;
        scanf("%d", &n);
        char a[100];
        scanf("%s",a);
        
        for(int j=0; j<n; j++) {
            printf("%s ", a);
        }
        printf("\n");
    }
}