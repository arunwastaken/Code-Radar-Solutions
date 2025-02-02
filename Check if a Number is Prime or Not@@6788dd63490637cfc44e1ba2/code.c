#include<stdio.h>
int main()
{
    int a;
    scanf("%a", &a);
    if(a == 1)
    {
        printf("Not Prime");
    }
    int p = 1;
    for(int i = 2; i < a; i++)
    {
        if(a%i == 0)
        {
            p = 0;
            break;
        }
    }
    if(p)
    {
        printf("Prime");
    }
    else
    {
        printf("Not Prime");
    }
    return 0;
}