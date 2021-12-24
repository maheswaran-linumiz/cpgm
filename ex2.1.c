	//print the range of data types
#include<stdio.h>
#define size(x) sizeof(x)*8
void signed_one(int);
void unsigned_one(int);
void main()
{
	printf("\n range of int:");
	signed_one(size(int));
	printf("\n range of unsigned int:");
	unsigned_one(size(int));
	printf("\n range of char:");
	signed_one(size(char));
	printf("\n range of unsigned char:");
	unsigned_one(size(unsigned char));
	printf("\n range of short:");
	signed_one(size(short));
	printf("\n range of unsigned short:");
	signed_one(size(unsigned short));
}
void signed_one(int count)
{
	int min,max,pro=1;
	while(count!=1)
	{
		pro=pro<<1;
		count--;
	}
	min=-pro;
	min=min+1;
	min=min-1;
	printf("\n%d to %d",min,max);
}


void unsigned_one(int count)
{
	int min,max,pro=1;
	while(count!=0)
	{
		pro=pro<<1;
		count--;
	}
	min=0;
	min=pro-1;
	printf("\n%u to %u",min,max);
}

