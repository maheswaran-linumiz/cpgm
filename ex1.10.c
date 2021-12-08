/*replacing for tabespace\t,backspace\b,for / \\*/
#include<stdio.h>
int main()
{
	char c;
	while((c= getchar())!=EOF)
	{

	if(c=='	')
	{
           printf("\\t");
           continue;
	}
	if(c=='/')
	{

           printf("\\\\");
	   continue;
	 }
	if(c=='\b')
	{
            printf("\\b");  
          continue;

	}

	putchar(c);
}
	
return 0;
}
