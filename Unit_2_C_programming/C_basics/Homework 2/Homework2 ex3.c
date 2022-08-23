/*
 * ex3.c
 *
 *  Created on: Jul 19, 2021
 *      Author: salim
 */

#include <stdio.h>

void main()
{
	float a,b,c,max;
	printf("Enter three numbers : \n ");
	fflush(stdout);
	scanf("%f %f %f",&a,&b,&c);
	max=a;
	if((b>max)||(c>max))
	{
		if(b>c)
		{
			max=b;
			printf("Largest number %f",b);
		}
		else printf("Largest number %f",c);
	}
	else printf("Largest number %f",a);
}
