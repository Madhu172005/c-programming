#include<stdio.h>
#include<conio.h>
int p,r,t,si;
void main()

{
clrscr();
printf("principle amnt. : ");
scanf("%d",&p);

printf("\n rate of intrest: ");
scanf("%d",&r);

printf("\n time: ");
scanf("%d", &t);

si= p*r*t/100;
printf("intrest amnt. : ");
printf("%d", si);
getch();
}
