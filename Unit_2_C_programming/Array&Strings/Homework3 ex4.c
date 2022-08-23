/*
 * Homework3 ex4.c
 *
 *  Created on: Jul 25, 2021
 *      Author: salim
 */

# include <stdio.h>

void main()
{
	int tab[100],n,elm,pos,i;
	printf("Enter no of elements : \n");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		tab[i]=i+1;
		printf("%d ",tab[i]);
	}
	printf("\n");
	printf("Enter the element to be inserted : \n");
	fflush(stdin);fflush(stdout);
	scanf("%d",&elm);
	printf("Enter the location : \n");
	fflush(stdin);fflush(stdout);
	scanf("%d",&pos);
	for(i=n;i>pos-1;i--)
	{
		tab[i]=tab[i-1];
	}
	tab[pos-1]=elm;
	for(i=0;i<n+1;i++)
	{
		printf("%d ",tab[i]);
	}
}

