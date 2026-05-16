#include <stdio.h>

int main() {

    long long a, b, c, d;

    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);

    if((a>=c && a<=d) || (c>=a && c<=b)) {

        if(a==b && b==d) {

                printf("%lld ", a);
                printf("%lld", a);
                

        } else if(a==c) {
            printf("%lld ", a);

            if(b>d) {

                printf("%lld", d);

            } else if(b==d) {

                printf("%d", b);

            } else {

                printf("%lld", b);

            }

        } else if(a>c && a<d) {

            printf("%lld ", a);

            if(b>d) {

                printf("%lld", d);

            } else if(b==d) {

                printf("%d", b);

            } else {

                printf("%lld", b);

            }

        } else {

            printf("%lld ", c);

            if(b>d) {

                printf("%lld", d);

            } else if(b==d) {

                printf("%d", b);

            } else {

                printf("%lld", b);

            }

        }

    } else {

        printf("-1");

    }

} 