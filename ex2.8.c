		// rightrot(x,n)return corresponding intger
#include <stdio.h>
unsigned rightrot(unsigned x, int n);

int main(void)
{
	printf("%u\n", rightrot(64, 5));
	return 0;
}

unsigned rightrot(unsigned x, int n)
{
  return x >> n | ((x & (~(~0 << n))) << (8 - n));
}
