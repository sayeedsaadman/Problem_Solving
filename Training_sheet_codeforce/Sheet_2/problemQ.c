#include <stdio.h>

int main() {
    long long n,x,x1,digit,f=0;
    scanf("%lld",&n);
    for (int i = 0;i<n;i++) {
        scanf("%lld",&x);
        x1=x;
    while (x > 0) {
            digit = x % 10;
            printf("%lld ",digit);
            x/= 10;
        }
        if(x1==0)
    {
        printf("0 ");
    }
    else {
    printf("\n");
    }
    }
    return 0;
}
