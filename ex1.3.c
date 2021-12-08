		 /*printf fahrenhiet-celsius table for fahr=0,20,.....300*/
#include<stdio.h>
main()
{	
    double fahr,celsius;
    int lower=0,upper=300,step=20;/*lower limi,upperlimit,stepsize*/
    celsius = lower;

            printf("temp:\tcelsius:\n");
    while(celsius <=upper)
    { 
	    fahr= (9.0/5.0*celsius)+32;
	    printf("%.0f\t%.2f\n",fahr,celsius);
	    celsius=celsius +step;
    

    }
    printf("examble %10.2f");

}
