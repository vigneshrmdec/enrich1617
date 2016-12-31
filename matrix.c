#include<stdio.h>
int main()
{
  int a[3][3],i,j,m,n,k,z=0;
  printf("enter the size :");
  scanf("%d%d%d",&m,&n,&k);
  printf("enter the values:");
  for(i=0;i<m;i++)
{
     for(j=0;j<n;j++)
  {   
        z=i+j;
        if(z==k)
          {
            a[i][j]=1;
          }
        else
          {
            a[i][j]=0;
          }
  }
}
  printf("the matrix is:\n");
  for(i=0;i<m;i++)
 {
     for(j=0;j<n;j++)
      {
         printf("%d\t",a[i][j]);
      }
         printf("\n");
 }      
  return(0);
}
