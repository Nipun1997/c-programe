#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int n,c;
    printf("enter any number\n");
    scanf("%d",&i);
    printf("enyer the position of number");
    scanf("%d",&n);
    c=i<<(n-1);
    if((i &  c)>0)
    {
        printf("nth bit is 1");
    }
        else
        {
            printf("0 bit");
        }

}
