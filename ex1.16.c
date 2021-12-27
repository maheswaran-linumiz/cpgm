   //maimum length count,maxlength of line//
#include<stdio.h>
#define high 1000
int gline(char line[] ,int maxln);
void copy(char to[],char from[]);
int main()
{
	int ln,i=0;
	char line[high];
	char lg[high];
	while((ln=gline(line,high))>0)
	   if(ln>i)
	{
	    i=ln;
	    copy(lg,line);
	}
	if(i>0)
	printf("\nmaximum lenth coun:%d \nmax lent of line:%s\t",i,lg);
	return 0;
}

int gline(char s[],int lim)
{
	int j,c;
	  for(j=0;j<lim-1 && (c=getchar())!=EOF && c!='\n';++j)
		s[j]=c;
	    if(c=='\n')
	    {
		s[j]=c;	
		++j;	    
	    }
	    s[j]='\0';
		return j;
}
void copy(char to[], char from[])
{
	int k;
	k=0;
	while((to[k] =from[k])!='\0')
	++k;
}
