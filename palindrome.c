#include <stdio.h>
using namespace std;

int main() {
	//{
  
  int num,rev=0,copy,n;
  printf("enter the no:");
  scanf("%d",&num);
  copy=num;
  while(num!=0)
	{
  	n=num%10;
  	rev=rev*10+n;
 	num=num/10;
	}
  if(rev==copy)
        {
            printf("%d is a palindrome",copy);
        }
  else 
             printf("%d is  not a palindrome",copy);
           

     
	return 0;
}
