#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define maxline 100
void itob(int n,int b,char s[]);
void reverse(char s[]);
int main(void)
{
  int number,base;
  char str[maxline];
  number=10;
  base=16;
 itob(number,base,str);
 printf("%s\n",str);
 return 0;
}
void itob(int n,int b,char s[])
{
	int i,sign,j;
	if((sign=n)<0)
	n=-n;
	i=0;	
	do
	{
		j=n%b;
	s[i++]=(j<=9)?j+'0':j+'a'-10;
	}
	while((n/=b)>0);
	if(sign<0)
	s[i++]='-';
	s[i]='\0';
	reverse(s);
}

void reverse( char s[])
{
	int c,i,j;
	for(i=0,j=strlen(s)-1;i<j;i++,j--)
	c=s[i],s[i]=s[j],s[j]=c;

}	
