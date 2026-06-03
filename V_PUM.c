#include <stdio.h>

int main() {

    int n;

    scanf("%d", &n);

    int num = 1;

    for (int i = 0; i < n; i++) {

        printf("%d %d %d PUM\n", num, num + 1, num + 2);

        num += 4;

    }

    return 0;
    
}