	/*more blanks by a single blank*/
#include<stdio.h>
int main()
{
	char c,b='%';
	while((c=getchar())!=EOF)
	{	if(c==' ')
	    {	
		if(b!=' ')
		putchar(c);	
	    } 
		else
	    {
		putchar(c);
	    }
		b=c;

	}
return 0;
}
