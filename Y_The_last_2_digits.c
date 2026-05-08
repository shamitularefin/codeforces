#include <stdio.h>

int main() {
  long long a, b, c, d;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
    long long mul1 = (a * b) % 100;
    long long mul2 = (c * d) % 100;
    long long mul3 = mul1 * mul2;
    long long mul = mul3 % 100;
    //printf("%lld\n", mul);  
     if(mul == 0) {
      printf("00");
     } else if(mul == 1) {
      printf("01");
     } else if(mul == 2) {
      printf("02");
     } else if(mul == 3) {
      printf("03");
     } else if(mul == 4) {
      printf("04");
     } else if(mul == 5) {
      printf("05");
     } else if(mul == 6) {
      printf("06");
     } else if(mul == 7) {
      printf("07");
     } else if(mul == 8) {
      printf("08");
     } else if(mul == 9) {
      printf("09");
     } else {
      printf("%lld\n", mul);
     }
  
    return 0;
}