#include<stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int bval = (num >> b) & 1;
    printf("%d", bval);
    return 0;
}