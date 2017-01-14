#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
static int a[10][10];
int i,j,num;
printf("enter the size:");
scanf("%d",&num);
j=0;
for(i=0;i<num;i++)
  {
    a[i][0]=1;
    a[i][j]=1;
    j++;
  }
for(i=2;i<num;i++)
{
  for(j=0;j<=i;j++)
   {
     a[i][j]=a[i-1][j-1]+a[i-1][j];
   }
 }
 for(i=0;i<num;i++)
  {
  for(j=0;j<=i;j++)
     printf("%d",a[i][j]);
    printf("\n");
  }
 getch();
 }
