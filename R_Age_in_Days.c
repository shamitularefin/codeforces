#include<stdio.h>
#include<math.h>

int main() {
    int n;
    scanf("%d", &n);
    int y = n/365;
    int m = (n - (y * 365)) / 30;
    int d = n- (y * 365) - (m * 30);
    printf("%d years\n%d months\n%d days", y, m, d);
    return 0;
}