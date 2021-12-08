	/*Count tabs blanks and new line*/
#include<stdio.h>
int main()
{
	int c,blank=0,tab=0,newline=0;
	while((c=getchar())!=EOF)
	{
		if(c==' ')
		{
			 ++blank;
	 	
		}	
		if(c=='\t')
		{	
	 		++tab;
			
		}
		if(c=='\n')
		{
	 		++newline;
		}
	}
	printf("spaces:%d\n tabespaces:%d\n newlines:%d\n",blank,tab,newline);
return 0;
}
