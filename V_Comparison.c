#include <stdio.h>

int main() {
    int a, b ;
    char x;
    scanf("%d %c %d", &a, &x, &b);
    if(x == '>') {
        if(a>b) {
            printf("Right");
        } else {
            printf("Wrong");
        }
    } else if(x == '<') {
        if(a<b) {
            printf("Right");
        } else {
            printf("Wrong");
        }
    } else {
        if(a == b) {
            printf("Right");
        } else {
            printf("Wrong");
        }
    }
}