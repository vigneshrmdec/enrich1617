#include<stdio.h>
#include<string.h>
int main()
{
  char a[10],g[10];
  int c[10],i,j=0,count=1,z,b,y;
  scanf("%s",a);
  for(i=0;i<strlen(a);i++)
    {
       if(a[i]==a[i+1])
        {
           count++;
        }
        else 
        {
         c[j]=count;
         g[j]=a[i];
         count=1;
         j++;
        } 
    }
  b=strlen(a);
  if(a[b]==a[b-1])
    {
       g[j+1]=c[j+1];
    }
  y=strlen(g);
  for(i=0;i<strlen(g);i++)
     {
      if(c[i]==2)
         {
           printf("%c",g[i]);
         }
      else 
         {
          printf("%c",g[i]);
          printf("%d",c[i]);
         }
    }
return(0);
}
     
