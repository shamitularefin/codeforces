#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int s=1;
    for(int i=2; i<n; i++) {
        if(i==n) {
            continue;
        } else if(n%i==0) {
            s=0;
            break;
        }
    }
    if(s==0) {
        printf("NO");
    } else {
        printf("YES");
    }
}