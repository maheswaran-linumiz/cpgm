	  //converting escape sequance in to real character
#include<stdio.h>
#define max 1000
void escape(char s[], char t[]);
int getln(char[] ,int mline);
int main(void)
{
char s[max],t[max];
getln(t,max);
escape(s,t);
printf("%s",s);
return 0;
}
void escape(char s[], char t[])
   {
	int i,j;
	i=j=0;
	while(t[i]!='\0')
  {
	switch(t[i])	
     {	
	case'\t':
	s[j]='\\';
	++j;
	s[j]='t';
	break;
	case'\n':
	s[j]='\\';
	++j;
	s[j]='n';
	break;
	default:
	s[j]=t[i];
	break;
      }
	++i;
	++j;
   }
	s[j]='\0';
}
int getln(char s[],int lim)
{
	int c,i;
	for(i=0;i<lim-1 && (c=getchar())!=EOF;i++)
		s[i]=c;
	s[i]='\0';
}
