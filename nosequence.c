#include<conio.h>
#include<stdio.h>
void main()
{
int n=1,i,num;
clrscr();
printf("enter the no:");
scanf("%d",&num);
for(i=2;i<=num+1;i++)
  {
    printf("%d",n);
    n=n+i;
    printf("\n");
  }
getch();
}
