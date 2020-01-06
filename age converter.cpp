/*Made by Muhhamd husnain Afridi
version 1.0
in this program we will convert our age from years to months,weeks,days,hours,minutsandseconds*/
#include<stdio.h>
#include<conio.h>
int main (void)
{
	int years;
	int months;
	int weeks;
	int days;
	int hours;
	int minuts;
	long double seconds;
	printf("\nenter your age in years\n");
	scanf("%d",&years);
    months=years*12;
    printf("\nyour age in months %d\n",months);
    weeks=months*4;
    printf("\nyour age in weeks %d\n",weeks);
    days=years*365;
	printf("\nyour age in days %d\n",days);
	hours=days*24;
	printf("\nyour age in hours %d\n",hours);
	mints=hours*60;
	printf("\nyour age in mints %d\n",minuts);
	seconds=minuts*60;
	printf("\nyour age in seconds %.0Lf\n",seconds);
	return 0;	
	
	}
