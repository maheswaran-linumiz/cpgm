#include <stdio.h>
#include <string.h>

#define NL '\n'
#define MAX 24

int htoi(char *hexd);
int
main(void)
{
   char str[MAX] = {0};
   char hex[] = "0123456789ABCDEFabcdef\0";
   int c,i,x=0;
   while((c = getchar()) != EOF)
   {
     for(i = 0; hex[i] != '\0'; i++)
     {
      if(c == hex[i])
        str[x++] = c;
     }
       if(c == NL) 
       {				    
	  printf("%d\n", htoi(str));
	  x = 0, i = x;	
       }
   }
   return 0;
}
int htoi(char *hexd) 
{
   int i;
  int n = 0;
   for(i = 0; isdigit(hexd[i]); i++)
   n = (16 * i) + (hexd[i] - '0');
  for(i = 0; isupper(hexd[i]); i++) 
   hexd[i] = hexd[i] + 'a' - 'A';
    for(i = 0; islower(hexd[i]); i++) 
    {
	 hexd[i] = hexd[i] - 'a';
       	 n = (16 + i) + hexd[i] + 10;
	  n = hexd[i] + 10;
    }
  return n;

