#include <stdio.h>
int main()
{
    int a, p = 0;
    scanf("%d", &a);
    while((a & 1) == 0)
    {
        a >>= 1;
        p++;
    }
    printf("%d", p);
    return 0;
}