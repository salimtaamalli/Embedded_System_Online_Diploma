/*
 * Homework3 ex3.c
 *
 *  Created on: Jul 25, 2021
 *      Author: salim
 */

#include <stdio.h>

void main()
{
	int i,j;
	int row,col;
	int a[100][100];
	printf("Enter rows and columns of matrix \n");
	fflush(stdin);fflush(stdout);
	scanf("%d %d",&row,&col);
	for (i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
		 	printf("Enter elements a%d%d \n",i+1,j+1);
			fflush(stdin);fflush(stdout);
			scanf("%d",&a[i][j]);
		}
	}
	printf("Entered matrix : \n");
	for (i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d \t",a[i][j]);
		}
		printf("\n");
	}
	printf("Transpose of matrix : \n");
	for (i=0;i<col;i++)
		{
			for(j=0;j<row;j++)
			{
				printf("%d \t",a[j][i]);
			}
			printf("\n");
		}

}

