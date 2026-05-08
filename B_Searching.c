#include <stdio.h>

int main() {
    int n;
    int a;
    int found=0;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &a);
    for(int i=0; i<n; i++) {
        if(a==arr[i]) {
            printf("%d", i);
            found=1;
            break;
        }
    }
    if(found==0) {
        printf("-1");
    }
    return 0;
}