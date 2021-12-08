  /*To test the word count program*/
#include<stdio.h>
#define IN 1
#define OUT 0
int main()
{

	int c,nc=0,state=OUT,nw=0;
	while((c=getchar())!=EOF)
     { 

     if(c>=65 && c<=90 ||c>=97 && c<=122 )
	     nc++;
     if(c==' '|| c=='\n'||c=='\t')
	     state=OUT;
     else if(c>=32 && c<=64||c>=91 && c<=96)
	     continue;
     else if(state==OUT)
     {
	     state=IN;
       ++nw;
     }
     }
      printf("numcount:%d\n numword:%d ",nc,nw);
	return 0;
}
