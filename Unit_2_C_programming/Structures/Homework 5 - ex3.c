/*
 * ex3.c
 *
 *  Created on: Oct 30, 2021
 *      Author: salim
 */

#include <stdio.h>

struct complex
{
	float real;
	float imag ;
};

struct complex add_complex( struct complex , struct complex);
void main ()
{
	struct complex a,b,sum ;
	printf("For 1st complex number : \n Enter real and imaginary respectively : \n");
	scanf("%f %f",&a.real,&a.imag);
	printf("For 2nd complex number : \n Enter real and imaginary respectively : \n");
	scanf("%f %f",&b.real,&b.imag);
	sum=add_complex(a,b);
	printf("sum= %f + i%f",sum.real,sum.imag);
}

struct complex add_complex( struct complex c1 , struct complex c2)
{
	struct complex c;
	c.real=c1.real+c2.real;
	c.imag=c1.imag+c2.imag;
	return c;
}
