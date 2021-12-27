						//itoa with field width

#include<stdio.h>
#include<string.h>
#include<limits.h>
#define max 1000
void itoa(int n,char s[],int w);
void reverse(char s[]);
int main(void)
{
	int num,width;
	char str[max];
	num=-343565;
	width =3;
	itoa(num,str,width);
	printf("%s",str);
	return 0;
}
void itoa(int n,char s[],int w)
{
	int i,sign;
	if((sign=n)<0)
	n=-n;
	i=0;
	do
	{
	s[i++]=(n%10) +'0';
	}
	while((n/=10)>0);
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
	
