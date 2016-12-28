#include<conio.h>
#include<stdio.h>
void main()
{
long int num,n;
clrscr();
printf("enter the no:");
scanf("%ld",&num);
n=num/10000;
num=num%10000;
num=num*10+n;
printf("the no is:%ld",num);
getch();
}
