// replace tab to space //
#include<stdio.h>
#define tab 8
char k=8' ';
int main(void)
{
	int nb,pos,c,count=0;
	nb=0;
	pos=1;
	while((c=getchar())!=EOF)
	{
	 if(c=='\t')
	 {
		
		
			 putchar('#');
			 ++pos;
	 
		 }
	 if(c==k)
	 {

		 putchar('.');
		 pos++;
	}

	 if(k==8)
	 {
		 putchar('#');
		 pos++;
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
	count=0;
	}
	}
return 0;
}
