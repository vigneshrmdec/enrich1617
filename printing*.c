#include <stdio.h>
int main(void) {
int num,a,l,i,j,k=1;
printf("enter the size:\n");
scanf("%d",&num);
l=num;
for (a=0;a<num;a++)
{
  for(i=1;i<l;i++)
  {
   printf(" ");
   }

 for(j=0;j<k;j++)
 {
   printf("*");
   printf(" ");
 
 }
 printf("\n");
 k++;
 l--;
}
return 0;
}
