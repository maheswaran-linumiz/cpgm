#include <stdio.h>

#define MAX_STRING_LENGTH 100

int main(void)
{

int i = 0,c,lim = MAX_STRING_LENGTH;		
char s[MAX_STRING_LENGTH];
/*
 * 	for (i = 0; i < lim-1 && (c=getchar()) != '\n' && c != EOF; ++i)
 * 			s[i] = c;
 * 				*/
while (i < (lim - 1))
{
c = getchar();
if (c == EOF)
break;
else if (c == '\n')
//break;
s[i++] = c;
}
s[i]='\0';
return 0;
}
