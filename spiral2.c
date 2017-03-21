#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d",&n);    
	int a[n][n],i,j=0,k=1;
	for(i=0;i<n;i++)
	  {
	      while(j<n)
	      {
	          a[i][j]=k;
	          j++;
	          k++;
	      }
	      j--;i++;
	      while(j>=0)
	      {
	          a[i][j]=k;
	          j--;
	          k++;
	      }
	      j++;
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

