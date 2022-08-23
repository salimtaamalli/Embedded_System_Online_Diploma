/*
 * ex4.c
 *
 *  Created on: Jul 19, 2021
 *      Author: salim
 */

# include <stdio.h>

void main()

{
	float a ;
	printf("Enter a number: \n");
	fflush(stdout);
	scanf("%f",&a);
	if (a>0)
	{
		printf("%f is positive ",a);
	}
	else if (a<0)
	{
		printf("%f is negative",a);
	}
	else printf("you entered zero \n");
}
