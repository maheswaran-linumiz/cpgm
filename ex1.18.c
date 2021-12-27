  //remove tabspace space newline//
#include<stdio.h>
#define high 1000
int gline(char line[] ,int maxln);

int main()
{
   int ln,i;
   char line[high];
   char lg[high];
   while((ln=gline(line,high))>0)
    for(int j=0;line[j]!='\0';j++)
    {
	    if(line[j]=='\n'&& line[j+1]=='\n')
		    line[j+1]='\b';
   
	printf("%c",line[j]);
    }
    	return 0;
}
int gline(char s[],int lim)
{
	int i,c;
	for(i=0;i<lim-1 && (c=getchar())!=EOF ;++i)
	{
	
	if((c!=' ')&& (c!='\t'))
	s[i]=c;
	else 
	--i;
	}
	return i;
}
