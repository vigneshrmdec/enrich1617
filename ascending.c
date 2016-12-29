#include <stdio.h>
using namespace std;

int main() {
	  int num,a[100],i=0,j,n,z;
  printf("enter the no:");
  scanf("%d",&num);
  while(num!=0)
  {
    n=num%10;
    a[i]=n;
    num=num/10;
    i++;
  }
   
   z=i; 
  for(i=0;i<z;i++)
     for(j=i+1;j<z;j++)
        {
          if(a[i]>a[j])
              {
                  int c;
                 c=a[i];
                 a[i]=a[j];
                 a[j]=c;
              }
       }

  for(i=0;i<z;i++)
    {printf("%d",a[i]);
        
    }

	return 0;
}
