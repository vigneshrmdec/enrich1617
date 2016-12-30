#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char s1[50],s2[50];
    int i,length,j=0;
    printf("enter the string");
    scanf("%S",s1);
    length=strlen(s1);
    for(i=0;i<length;i++)
    {
        if(s1[i]=='a'||s1[i]=='A'||s1[i]=='e'||s1[i]=='E'||s1[i]=='i'||s1[i]=='I'||s1[i]=='o'||s1[i]=='O'||s1[i]=='u'||s1[i]=='U'||s1[i]==' ')
        {
            s1[i]=' ';
        }
        else
        {
            s2[j]=s1[i];
            j++;
        }
    }
    printf("%s",s2);
    getch();
}
