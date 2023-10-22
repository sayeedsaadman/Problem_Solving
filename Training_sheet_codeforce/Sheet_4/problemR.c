#include<stdio.h>
#include<string.h>
int main()
{
    int x,count=0;
    scanf("%d",&x);
    char input[x+10];
    for(int i=0;i<x;i++)
    {
        scanf(" %c",&input[i]);
    }
    for(int i=0;i<x;i++)
    {
      if(input[i]=='V')
      {
          count+=5;
      }
      if(input[i]=='W')
      {
          count+=2;
      }
      if(input[i]=='X')
      {
        if (i + 1 < x)
        {
                input[i + 1] = ' ';
        }
      }
      if(input[i]=='Y')
      {
         if (i + 1 < x)
      {
                input[i + 1] = ' ';
                input[x] = input[i + 1];
      }
      }
      if(input[i]=='Z')
      {
        if (i + 1 < x)
      {
        if (input[i + 1] == 'V')
            {
                count /= 5;
                if (i + 2 < x)
                input[i + 2] = ' ';
            }
        else if (input[i + 1] == 'W')
            {
                    count /= 2;
                if (i + 2 < x)
                        input[i + 2] = ' ';

      }

    }
      }
    }
    printf("%d",count);






    return 0;
}
