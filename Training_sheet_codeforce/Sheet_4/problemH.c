#include<stdio.h>
#include<string.h>
int main()
{
    char str[100000];
    int i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%s",str);
        int flag =0;
        for(int j=0;str[j]!='\0';j++)
        {
             if(str[j] == '0' && str[j+1] == '1' && str[j+2] == '0') {
                flag = 1;
                break;
            }
            if(str[j] == '1' && str[j+1] == '0' && str[j+2] == '1') {
                flag = 1;
                break;
        }
    }
    if(flag == 1)
    {
        printf("Good\n");
    }
    else
        printf("Bad\n");

    }
    return 0;
}

