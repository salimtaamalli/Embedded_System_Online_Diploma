/*
 * Homework3_ex1.c
 *
 *  Created on: Jul 24, 2021
 *      Author: salim
 */
#include <stdio.h>
void main()
{
	int a[2][2],b[2][2],sum[2][2];
	int i,j;
	printf("Enter the elements of the 1st matrix \n");
	for (i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("Enter a%d%d \n",i+1,j+1);
			fflush(stdin);fflush(stdout);
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter the elements of the 2nd matrix \n");
	for (i=0;i<2;i++)
		{
			for(j=0;j<2;j++)
			{
				printf("Enter b%d%d \n",i+1,j+1);
				fflush(stdin);fflush(stdout);
				scanf("%d",&b[i][j]);
			}
		}
	printf("Sum of matrix : \n");

	for (i=0;i<2;i++)
			{
				for(j=0;j<2;j++)
				{
					printf("%d \t",a[i][j]+b[i][j]);
				}
				printf("\n");
			}

}
