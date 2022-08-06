/*
 * Homework3 ex5.c
 *
 *  Created on: Jul 25, 2021
 *      Author: salim
 */

# include <stdio.h>

void main()
{
	int num,i,ele,tab[100];
	printf("Enter no of elements : \n");
	fflush(stdin);fflush(stdout);
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		tab[i]=11*(i+1);
		printf("%d ",tab[i]);
	}
	printf("\n Enter the element you want to search \n");
	fflush(stdin);fflush(stdout);
	scanf("%d",&ele);
	i=0;
	while((i<num)&&(tab[i]!=ele))
	{
		i++;
	}
	if(tab[i]==ele) printf("number found at the location = %d \n",i+1);
	else printf(" Element not found \n");
}

