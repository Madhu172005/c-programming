#include <stdio.h>
#include <conio.h>
void swap(int,int);
void main()
{
  int i,j;
  printf("enter i and j value:");
  scanf("%d%d",&i,&j);
  printf("before swapping:%d %d\n",i,j);
  swap(i,j);
  printf("after swapping:%d %d\n",i,j);
  getch();
}
  void swap(int a,int b)
    {
      int temp;
      temp=a;
      a=b;
      b=temp;
  }

