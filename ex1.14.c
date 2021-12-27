// Histrogram of a character in freq//
#include<stdio.h>
#define low 32
#define high 128
int main()
{
	int c,i,j;
	i=j=c=0;
	 int hist[high];
	if((i<low) && (low<=high))
	{
		for(i=0;i< high;i++)
		hist[i]=0;
	while((c=getchar())!=EOF)
	{
		++hist[c-low];
	if(c=='\n')
	{
	for(i=0;i<high;i++)
		if(hist[i]!=0)
		{
	
			printf("\n");
			printf("%c:",i+low);
			for(j=0;j<hist[i];j++)
				printf("*");
		}
	}		
		
	}	

	}
	return 0;
}

