#include<stdio.h>
int main()
{
int a[10],i,j,num,search;
printf("enter the size:");
scanf("%d",&num);
printf("enter the any 5 no:");
for(i=0;i<num;i++)
 {
   scanf("%d",&a[i]);
 }
printf("\nenter the search element:");
scanf("%d",&search);
for(i=0;i<num;i++)
  {
    if(a[i]==search)
      {
           printf("%d",i);
      }
  }
return(0);
}
