#inlude<stdio.h>
int main()
{
    int a, b, c, d;
    scanf("%d %d", &a, &b);
    a, b = c, d;
    printf("%d %d", d, c);
    return 0;
}