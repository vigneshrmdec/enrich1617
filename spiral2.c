#include <stdio.h>

int main(void)
{
    int n,sign=-1;
    scanf("%d",&n);    
	int a[n][n],i,j=0,k=1;
	for(i=0;i<n;i++)
	  {
	      sign=-sign;
	      while((j<n)&&(j>=0))
	      {
	          a[i][j]=k;
	          j+=sign;
	          k++;
	      }
	      j=j-sign;
	 }
	  for(i=0;i<n;i++)
	  {
	    for(j=0;j<n;j++)
	    {
	        printf(" %d",a[i][j]);
	    }
	    printf("\n");
	  }  
	return 0;
}

