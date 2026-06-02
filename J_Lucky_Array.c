#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a[n];
    int b[n];

    for(int i=0; i<n; i++) {

        scanf("%d", &a[i]);

    }

    int min = a[0];

    for(int i=0; i<n; i++) {

        if(min>a[i]) {

            min = a[i];
            
        }

    }

    int count = 0;

    for(int i=0; i<n; i++) {

        if(min==a[i]) {

                count++;

        }

    }

    if(count%2==0) {

        printf("Unlucky");

    } else {

        printf("Lucky");

    }

}