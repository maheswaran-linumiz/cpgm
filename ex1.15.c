    //Temperature converstion in farenheart to celsius
#define lower 0
#define upper 300
#define step 20

#include<stdio.h>
int celsius()
{
	float fr ,cls;
	fr=lower;
	while(fr<=upper)
	{
	   cls=((5.0/9.0)*(fr-32.0));
	   printf("%3.0f\t %6.1f\n",fr,cls);
	   fr=fr+step;
	}
	return 0;
}

int faren()
{
	float fr ,cls;
	cls=lower;
	while(cls<=upper)
	{
	   fr=((9.0/5.0*cls)+(32.0));
	   printf("%6.1f\t %3.0f\n",cls,fr);
	   cls=cls+step;
	}
	return 0;
}

int main()

{
	//faren();

	celsius();
}
