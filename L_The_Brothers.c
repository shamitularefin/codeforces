#include <stdio.h>
#include <string.h>

int main() {
    char a[101], b[101], c[101], d[101];
    scanf("%s %s\n", a, b);
    scanf("%s %s\n", c, d);
    if(strcmp(b, d)==0) {
        printf("ARE Brothers");
    } else {
        printf("NOT");
    }
}