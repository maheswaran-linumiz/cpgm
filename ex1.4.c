	/*celsius to fahr*/
#include<stdio.h>
main()
{	
    float fahr,celsius;
    int lower=0,upper=300,step=20;/*lower limi,upperlimit,stepsize*/
    celsius = lower;
     printf("celsius:\ttemp:\n");
while(celsius<=upper)
{ 
    fahr=(float)((9.0/5.0*celsius)+32.0);
     printf("%.0f\t\t%.2f\n",celsius,fahr);
    celsius=celsius +step;
 }


}
