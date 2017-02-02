#include<stdio.h>
int main()
{
int a[10],b[10],i,j=0,num,search;
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
        b[j]=i;
        j++;
      }
  }
printf("output:");
for(i=0;i<j;i++)
  printf("%d",b[i]);
return(0);
}
