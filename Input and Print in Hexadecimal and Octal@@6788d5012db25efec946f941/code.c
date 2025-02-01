#include <stdio.h>
int main(){
    int a;
    scanf("%d", &a);
    printf("Hexadecimal: ");
    printf("%x\n", toupper(a));
    printf("Octal: ");
    printf("%o", a);
    return 0;
}