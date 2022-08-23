/*
 * Ex5.c
 *
 *  Created on: Oct 30, 2021
 *      Author: salim
 */


#include <stdio.h>


struct student
{
	char name[50];
	int roll;
	float marks;
};

#include <stdio.h>


struct student
{
	char name[50];
	int roll;
	float marks;
};

void main ()
{
	struct student student1;
	printf("Enter name : \n");
	fflush(stdout);
	scanf("%s",student1.name);
	printf("Enter roll : \n");
	fflush(stdout);
	scanf("%d",&student1.roll);
	printf("Enter marks : \n");
	fflush(stdout);
	scanf("%f",&student1.marks);
	printf("Displaying information : \n name : %s \n roll : %d \n marks : %f",student1.name,student1.roll,student1.marks);
}
