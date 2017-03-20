#include <stdio.h>
int main() {
	int n;
	scanf("%d",&n);
	int a[n],i,j,flag=0;
	for(i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	  for(j=i+1;j<n;j++)
	  {
	      if(a[i]<a[j])
	        {
	            int temp;
	            temp=a[i];
	            a[i]=a[j];
	            a[j]=temp;
	        }
	  }

	  for(i=0;i<n;i++)
	 
	    {
	        if(a[i]%2==0&&flag==1)
	        {
	            printf("%d",a[i]);
	            break;
	        }
	        if(a[i]%2==0&&flag==0)
	        {
	            flag=1;
	            
	        }
	        
	    }
	    
	return 0;
}
