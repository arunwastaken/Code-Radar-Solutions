#include<stdio.h>
int main()
{
    int a, c = 0;
    scanf("%d", &a);
    if(a == 0)
    {
        printf("32");
    }
    fot(int i = 31; i >= 0; i--)
    {
        if(a & (1 << i))
        {
            break;
        }
        c++;
    }
    printf("%d", c);

    return 0;
}