#include <stdio.h> 

int main() {
    int n;
    scanf("%d", &n);
    int a[n];

    for(int i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (a[j] == 0) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    for(int i=0; i<n; i++) {
        if(i>0) {
            printf(" ");
        }

        printf("%d", a[i]);
    }
}