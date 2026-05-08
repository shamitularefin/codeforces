#include<stdio.h>

int main() {
    char y;
    scanf("%c", &y);
    if(y>=65 && y<=95) {
        y = y + 32;
        printf("%c", y);
    }else if(y>=97) {
        y = y - 32;
        printf("%c", y);
    }
}