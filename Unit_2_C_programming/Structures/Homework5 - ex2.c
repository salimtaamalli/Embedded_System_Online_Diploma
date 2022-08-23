/*
 * ex2.c
 *
 *  Created on: Oct 30, 2021
 *      Author: salim
 */


#include <stdio.h>
#include <math.h>


struct distance
{
	float feet;
	float inch;
};
void main ()
{
	struct distance d1,d2;
	printf("Enter information of 1st distance : \n Enter feet :\n ");
	scanf("%f",&d1.feet);
	printf("Enter inch :\n ");
	scanf("%f",&d1.inch);
	printf("Enter information of 2nd distance : \n Enter feet :\n ");
	scanf("%f",&d2.feet);
	printf("Enter inch :\n ");
	scanf("%f",&d2.inch);
	printf("Sum of distances : %f`- %f``", d1.feet+d2.feet+(int)(d1.inch+d2.inch)/12,fmod((d1.inch+d2.inch),12)/12 );
}


