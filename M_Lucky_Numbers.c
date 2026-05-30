#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int count = 0;

    for(int i=a; i<=b; i++) {

        int ok = 1;
        int temp = i;

        for(; temp>0; temp = temp / 10) {
            if(temp%10!=4 && temp%10!=7) {
                ok = 0;
                break;
            }
        }

        if(ok==1) {
            printf("%d ", i);
            count = 1;
        }

    }

    if(count==0) {
        printf("-1");
    }


}