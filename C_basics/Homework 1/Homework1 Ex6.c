/*
 * Ex6.c
 *
 *  Created on: Jul 18, 2021
 *      Author: salim
 */

#include <stdio.h>

void main()
{
	float a,b,tmp;
	printf("Enter value of a : \n");
	fflush(stdout);
	scanf("%f",&a);
	printf("Enter value of b : \n");
	fflush(stdout);
	scanf("%f",&b);
	tmp=a;
	a=b;
	b=tmp;
	printf("after swapping : value of a = %f \n", a);
	printf("after swapping : value of b = %f \n", b);
}

