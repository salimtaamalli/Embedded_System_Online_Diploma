/*
 * Ex7.c
 *
 *  Created on: Jul 20, 2021
 *      Author: salim
 */

#include <stdio.h>

void main()
{
	int i,a,fact;
	printf("Enter an integer : \n ");
	fflush(stdout);
	scanf("%d",&a);
	fact=1;
	if(a>0)
	{
		for(i=1;i<=a;i++)
		{
			fact=i*fact;
		}
		printf("factorial : %d",fact);
	}
	else if (a<0) printf("Error !! factorial of negative number does not exist \n");
	else printf("factorial : %d",fact);
}
