/*
 * ex6.c
 *
 *  Created on: Jul 19, 2021
 *      Author: salim
 */

#include <stdio.h>

void main()
{
	signed int a,i,sum;
	printf("Enter an integer \n");
	fflush(stdout);
	scanf("%d",&a);
	sum=0;
	for(i=0;i<=a;i++)
	{
		sum=sum+i;
	}
	printf ("sum : %d",sum);
}
