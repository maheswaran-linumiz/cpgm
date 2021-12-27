                //bin search function write minimum test inside fun
#include<stdio.h>
int binsearch(int x,int v[],int n)
{
   int low=0,high=n-1,mid;
    while(low <high && x!=v[mid])
    {
     if( x > v[mid])
      low = mid+1;
      else
    high = mid -1;
    mid = ( low + high)/2;
  }

   if(x==v[mid])
    return mid;
    else
        return -1;
	}

int main()
{
	int bal[]={1,2,3,4,5,6,7,8,9,10};
	int result=binsearch(8,bal,10);
	printf("%d",result);

}
