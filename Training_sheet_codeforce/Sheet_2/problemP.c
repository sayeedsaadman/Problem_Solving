#include<stdio.h>
int main()
{
    int x,i,j;
    scanf("%d",&x);
     for (i = x; i >= 1; i--){
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
}
    return 0;
}
