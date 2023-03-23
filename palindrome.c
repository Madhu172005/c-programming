#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,reverse=0,temp,rem;
    printf("Enter a number:");
    scanf("%d",&n);
    temp=n;
    while(temp!=0)
    {
        rem=temp%10;
        reverse=reverse*10+rem;
        temp/=10;
    }
    if(reverse==n)
    printf("%d is a palindrome",reverse);
    else
    printf("%d is not a palindrome",reverse);
    getch();
}
