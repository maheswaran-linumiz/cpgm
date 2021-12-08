                 /*printf celsius-fahr table for fahr=300,.....0*/
#include<stdio.h>
main()
{
    float fahr,celsius;
    int lower=0,upper=300,step=20;/*lower limi,upperlimit,stepsize*/
    celsius = upper;

            printf("celsius:\ttemp:\n");
    while(celsius >=lower)
    {
            fahr=(float) ((9.0/5.0*celsius)+32.00);
            printf("%3.0f\t\t%.0f\n",celsius,fahr);
            celsius=celsius -step;


    }
   // printf("examble %10.2f");

}
