/*
 * Q4.c
 *
 *  Created on: Nov 26, 2021
 *      Author: salim
 */

#include <stdio.h>

void main()
{
	int a[15],*p;
	char n,i;
	printf("Input The number of elements to store in the array (max15) : \n");
	fflush(stdout);
	scanf("%d",&n);
	p=a+n-1;
	for(i=0;i<n;i++)
	{
		printf("element - %d : " ,i+1);
		fflush(stdout);
		scanf("%d",&a[i]);
	}
	printf("The elemnts of array in reverse order are \n");
	i=n;
	while(p>=a)
	{
		printf("element - %d : %d \n",i,*p);
		p--;
		i--;
	}

}
