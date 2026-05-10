#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }
    int e=0;
    int o=0;
    int p=0;
    int ne=0;
    for(int i=0; i<n; i++) {
        if((a[i]%2)==0) {
            e++;
        } else{
            o++;
        }
        if(a[i]>0) {
            p++;
        } else if(a[i]<0) {
            ne++;
        }
    }
    printf("Even: %d\n", e);
    printf("Odd: %d\n", o);
    printf("Positive: %d\n", p);
    printf("Negative: %d\n", ne);
}