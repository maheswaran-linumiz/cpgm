			//detab, replaces tabs with spaces
#include<stdio.h>
#define tab 8
int main(void)
{
	int nb,pos,c;
	nb=0;
	pos=1;
	while((c=getchar())!=EOF)
	{
	 if(c=='\t')
	 {
		 nb=tab-((pos-1) % tab);
		 while(nb>0)
		 {
			 putchar('*');
			 ++pos;
		 --nb;
	 
		 }
	 }
	
	else if(c=='\n')
	{
		putchar(c);
		pos=1;
	}
	
	else
	{
		putchar(c);

	++pos;
	}
	}
return 0;
}
