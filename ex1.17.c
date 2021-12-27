              //more than 80 charecter line will print//
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
    if(i>=80)
	printf("%s\t",lg);
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
