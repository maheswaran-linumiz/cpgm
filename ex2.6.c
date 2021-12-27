		//setbit at n position

#include <stdio.h>

unsigned setbits(unsigned x, int p, int n,unsigned y);

int main(void)
{
unsigned result=setbits(8, 4, 3, 2);
printf("%d\n",result);
return 0;
}


unsigned setbits(unsigned x, int p, int n,unsigned y){
  unsigned ybits = y & ~(~0 << n);
  unsigned helper = ~(~0 << n);
  unsigned result = (x | (helper << (p+1-n))) & ((ybits << (p+1-n)) | (~(helper << (p+1-n))));
  return result;

