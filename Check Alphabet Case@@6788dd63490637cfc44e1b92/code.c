#include<stdio.h>
#include<ctype.h>
int main()
{
    char a;
    scanf("%c", &a);
    if(islower(a))
    {
        printf("Lowercase");
    }
    else
    {
        printf("Uppercase");
    }
    return 0;
}