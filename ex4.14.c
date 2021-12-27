/* a macro swap(t,x,y) that interchanges two arguments of type t */

#include<stdio.h>

#define swap(t,x,y) { t _z; z = x; x = y; y = z;}

int main(void)
{
    char x,y;
    x='a';
    y='b';
    printf("x= %c \t y= %c\n",x,y);
    swap(char,x,y);
    printf("x=%c \t y=%c\n",x,y);
}
/*	macro swap (x,y) tow arguments
#define swap(x,y) { x=x+y; y=x-y; x=x-y;}

int main(void)
{
    int x,y;
      x=3;
      y=2;
      printf("before ");
     printf("x= %d \t y= %d\n",x,y);
      swap(x,y);
      printf("after ");
       printf("x=%d \t y=%d\n",x,y);
}*/
