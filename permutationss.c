#include <stdio.h>
#include<string.h>

int main()
 {
   char a[20];
   int p,i,j,c,f=0;
   scanf("%s",a);
   p=strlen(a);
   for(i=0;i<p;i++)
       {
	    c=1;
	    for(j=i+1;j<l && a[i]!='@';j++)
	    {
	        if(a[j]==a[i])
	        {
	            a[j]='@';
	            c++;
	        }
	    }
	    if(a[i]!='@' && c%2==1)
            {
	        f++;
	    }
	    if(f>1)
	    {
	        printf("NO");
	        return 0;
	    }
	}
	printf("Yes");
	return 0;
}

    
