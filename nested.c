#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("value of a:");
    scanf("%d",&a);
    printf("value of b:");
    scanf("%d",&b);
    printf("value of c:");
    scanf("%d",&c);
    if(a>b||a>c)
    {
    printf("%d is the greater value.",a);
    }
    else if(b>a||b>c)
    {
        printf("%d is the greater value.",b);
    }
    else
    {
        printf("%d is the greater value.",c);
    }
}
