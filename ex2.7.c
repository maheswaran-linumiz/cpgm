		//setbit at n position invetrt
#include <stdio.h>

unsigned inv(unsigned x, int p, int n);

int main(void)
{
	int x=10,p=3,n=3;
	printf("invert bits :%u",inv(x,p,n));
}


unsigned inv(unsigned x, int p, int n)
{
  return  x ^(~(~0<<n)<<(p+1-n));
}

