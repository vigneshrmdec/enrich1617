#include<stdio.h>
int main()
{
 int a[10],i,count=0,num,size,search;
 printf("enter the size:");
 scanf("%d",&size);
 printf("enter the element:");
 for(i=0;i<size;i++)
 scanf("%d",&a[i]);
 printf("enter the search ele:");
 scanf("%d",&search);
 for(i=0;i<size;i++)
  {
    if(a[i]==search)
     count++;
  }
printf("%d is occuring at %d times",search,count);
return(0);
}
