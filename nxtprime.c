 #include<conio.h>
 #include<stdio.h>
 int main()
 {
  int n,q,i,flag=0;
  scanf("%d",&n);
  i=5;
  if(n<6)
  {
  if((n%2!=0)&&(n%3!=0))
     printf("%d is a prime number");
   else
   printf("%d,is not a prime number");
  }
  while (n>6&&i<n)
  {
    if(n%i==0&&i<n)
    {
	flag=1;
	break;
    }
    i=i+2;
    if(n%i==0&&i<n)
    {
	flag=1;
	break;
    }
     i=i+4;
  }
  if(flag==1)
  printf("%d is not a prime",n);
  else
  printf("%d is a prime",n);
  return 0;
 }
