#include<stdio.h>
int main()
{
    int a, b;
    char c;
    if(scanf("%d %d %c", &a, &b, &c)!=3)
    {
        printf("error\n");
        return 1;
    }
    if(c == '+')
    {
        printf("%d",a+b);
    }
    else if(c == '-')
    {
        printf("%d",a-b);
    }
    else if(c == '*')
    {
        printf("%d",a*b);
    }
    else if(c == '/')
    if(b==0)
    {
        printf("errpr\n");
    }
    else{
        printf("%d", a/b);
    }
    return 0;
}