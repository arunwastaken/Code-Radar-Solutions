#include<stdio.h>
int main()
{
    int a, c=0;
    scanf("%d", &a);
    if(a == 0)
    {
        printf("32");
        return 0;
    }
    while((a & 1) == 0)
    {
        c++;
        a >>= 1;
    }
    printf("%d", c);
    return 0;
}