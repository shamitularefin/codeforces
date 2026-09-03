#include <stdio.h>
#include <string.h>

int main() {
    char a[1001], b[1001];
    scanf("%1000s %1000s", a, b);

    int x = strlen(a);
    int y = strlen(b);

    printf("%d %d\n", x, y);

    printf("%s %s\n", a, b);
}