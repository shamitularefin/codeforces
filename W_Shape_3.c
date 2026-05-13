#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
         int j = 0;
         j = i + i + 1;
         
         for(int x=n-i-1; x>0; x--) {
                printf(" ");
            }
         
         for(int k=0; k<j; k++) {
            
            printf("*");
         }
         printf("\n"); 
    }
    for(int i=n; i>0; i--) {
         int j = 0;
         j = i + i + 1;
         
         for(int x=n-i; x>0; x--) {
                printf(" ");
            }
         
         for(int k=2; k<j; k++) {
            
            printf("*");
         }
         printf("\n"); 
    }
}