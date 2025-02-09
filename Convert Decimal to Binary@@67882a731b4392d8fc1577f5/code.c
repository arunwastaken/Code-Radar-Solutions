#include<stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    int i, f=0;
    for(i = 31; i >= 0; i--)
    {
        if(a & (1 << i))
        {
            f = 1;
            printf("1");
        }
        else if(f)
        {
            printf("0");
        }
    }
    if(!f)
    {
        printf("0");
    }
    return 0;
}