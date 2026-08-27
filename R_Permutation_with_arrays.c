#include <stdio.h>
 
int main() {
    int n;
    scanf("%d", &n);
 
    int a[n], b[n];
 
    for(int i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }
 
    for(int i=0; i<n; i++) {
        scanf("%d", &b[i]);
    }
 
    int ok = 1;
 
    for(int i=0; i<n; i++) {
        int x = 0;
        for(int j=0; j<n; j++) {
            if(b[j] != a[i]) {
                x++;
            }
        }
        if(x == n) {
            ok = 0;
            break;
        }
    }

    
    for(int i=0; i<n; i++) {
        int countA = 0;
        int countB = 0;

        for(int j=0; j<n; j++) {
            if(a[j] == a[i]) {
                countA++;
            }
            if(b[j] == a[i]) {
                countB++;
            }
        }

        if(countA != countB) {
            ok = 0;
            break;
        }
    }
 
    if(ok == 0) {
        printf("no\n");
    } else {
        printf("yes\n");
    }
 
    return 0;
}
