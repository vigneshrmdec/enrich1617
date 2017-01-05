#include<stdio.h>
int main()
{
int a[5][5],i,j,n,k=1;
printf("Enter the size:");
scanf("%d",&n);
for(i=0;i<n;i++)
  for(j=0;j<n;j++)
     a[i][j]==0;
 
for(i=0;i<n;i++) 
 {
  for(j=0;j<n;j++)
    {
     if(i<n)
      {
       i=i+n-1;
       }
    if(j<n)
      {
       j=j+n-1;
       }
    if(i>n)
     i=i%n;
    if(j>n)
     j=j%n;

     if(a[i-1][j+1]==0)
       {
           a[i-1][j+1]=k;
           i=i-1;
           j=j+1;
           k++;
       }
     else if(a[i-1][j+1]!=0)
    {
     a[i+1][j]=k;
     i=i+1;
     k++;
    }
  if(k>16)
  break;
}
for(i=0;i<n;i++)
{
  for(j=0;j<n;j++)
   printf("\t%d",a[i][j]);
}
printf("\n");
}
return(0);
}


