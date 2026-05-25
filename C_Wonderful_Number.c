#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int temp = n;

    int a[100];
    int l = 0;
    int pali = 1;

    for(; temp>0;) {

        a[l] = temp%2;
        temp = temp / 2;
        l++;

    }

    int m = l-1;

    for(int i = 0; i < l/2; i++) {

    if(a[i] != a[m]) {

        pali = 0;
        break;

    }

    m--;

    }

    if(pali==1 && (n%2)!=0) {

        printf("YES");

    } else {

        printf("NO");
        
    }

}