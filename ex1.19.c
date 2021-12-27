// sting Reverse //
#include<stdio.h>
#define high 1000
int reverse(char line[] ,int maxln);
int main()
{
	int ln,i,max=0;
	char line[high];
	char lg[high];
	while((ln=reverse(line,high))>0)
	if(ln>max)
	{
	for(i=ln;i>=0;i--)
	printf("%c",line[i]);
	}
	return 0;
	
}

int reverse(char s[],int lim)
{
	int j,c;
	 for(j=0;j<lim-1 && (c=getchar())!=EOF&&c!='\n';++j)
	s[j]=c;		    
	
	return j;
}
