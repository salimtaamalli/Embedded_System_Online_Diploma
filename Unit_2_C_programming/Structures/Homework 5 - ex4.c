/*
 * ex4.c
 *
 *  Created on: Oct 30, 2021
 *      Author: salim
 */



#include <stdio.h>

struct student
{
	char name[50];
	int roll;
	int marks;
};


void main ()
{
	int i;
	struct student tab[10];
	for(i=0;i<=9;i++)
	{
		printf("For roll number %d : \n",i+1);
		tab[i].roll=i+1;
		printf("Enter name : \n");
		fflush(stdout);
		scanf("%s",&tab[i].name);
		printf("Enter marks : \n");
		fflush(stdout);
		scanf("%d",&tab[i].marks);
	}
	printf("Displaying information of students : \n");
	for(i=0;i<=9;i++)
	{
		printf("Information number of roll number %d : \n",tab[i].roll);
		printf("name : %s \n",tab[i].name);
		printf("marks : %d \n",tab[i].marks);
	}
}
