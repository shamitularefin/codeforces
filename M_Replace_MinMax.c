#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);
    int arr[n];

    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    int max = arr[0];
    int min = arr[0];

    int a = 0, b = 0;

    for(int i=0; i<n; i++) {
        if(arr[i]<min) {
            min = arr[i];
            a = i;
        }
    }

    for(int i=0; i<n; i++) {
        if(arr[i]>max) {
            max = arr[i];
            b = i;
        }
    }

    arr[a] = max;
    arr[b] = min;

    for(int i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }
    
}