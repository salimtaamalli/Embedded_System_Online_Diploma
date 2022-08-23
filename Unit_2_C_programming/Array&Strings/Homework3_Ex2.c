/*
 * Ex2.c
 *
 *  Created on: Jul 25, 2021
 *      Author: salim
 */

# include <stdio.h>

void main()

{
	int i,num;
	float avg;
	float tab[100];
	printf("Enter the numbers of data : \n");
	fflush(stdin);fflush(stdout);
	scanf("%d",&num);
	avg=0;
	for(i=0;i<num;i++)
	{
		printf("%d.Enter number: \n ",i+1);
		fflush(stdin);fflush(stdout);
		scanf("%f",&tab[i]);
		avg+=tab[i];
	}
	avg/=num;
	printf("average = %f \n",avg);
}
