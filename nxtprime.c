#include<conio.h>
#include<stdio.h>
void main()
{
int num,i;
clrscr();
printf("enter the no:");
scanf("%d",&num);
for(i=num+1;i<(num*2);i++)
  if((i%2!=0)&&(i%3!=0)&&(i%5!=0)&&(i%7!=0)&&(i%11!=0))
  {
    printf("%d",i);
    break;
  }
  getch();
}
