/*
 * Ex7.c
 *
 *  Created on: Jul 18, 2021
 *      Author: salim
 */


#include <stdio.h>

void main()
{
	float a,b;
	printf("Enter value of a : \n");
	fflush(stdout);
	scanf("%f",&a);
	printf("Enter value of b : \n");
	fflush(stdout);
	scanf("%f",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("After swapping : value of a = %f \n", a);
	printf("After swapping : value of b = %f \n", b);

}
