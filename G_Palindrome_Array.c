#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);
    int ar[n];

    for(int i=0; i<n; i++) {
        scanf("%d", &ar[i]);
    }

    int v=1;

    for(int i=0; i<n; i++) {
        if(ar[i]!=ar[n-1-i]) {
            //printf("NO");
            v=0;
            break;
        }
    }

    if(v==0) {
        printf("NO");
    } else if("v==1") {
        printf("YES");
    }
}