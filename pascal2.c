#include<conio.h>
#include<stdio.h>
void main()
{
static int a[10][10];
int i,j,num,k;
clrscr();
printf("enter the size :");
scanf("%d",&num);
for(i=0;i<num;i++)
{
 a[i][i]=1;
 a[i][0]=1;
}
for(i=2;i<num;i++)
  {
 for(k=1;k<i;k++)
   {
    a[i][k]=i+1;
   }
  }
 for(i=0;i<num;i++)
  {
  for(j=0;j<=i;j++)
   {
     printf("%d",a[i][j]);
   }
   printf("\n");
  }
  getch();
}
