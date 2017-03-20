#include <stdio.h>

int main() {
	int n,d=1;
	scanf("%d",&n);
	int a[n][n],i,j,v=1;
	for(i=0;i<n;i++)
	{
	  if(i%2==0)
	     j=0;
	   else 
	     j=n-1;
	  while(j>=0&&j<n)
	    {
	        a[i][j]=d;
            d++;
            if(i%2==0)
            {
               j++;
            }
            else 
            {
               j--;
            }
	    }
	}
	for(i=0;i<n;i++)
	{
	  for(j=0;j<n;j++)
	     printf("%d ",a[i][j]);
	     printf("\n");
	}
	return 0;
}
