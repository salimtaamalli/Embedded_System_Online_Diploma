/*
 * Q1.c
 *
 *  Created on: Nov 26, 2021
 *      Author: salim
 */


#include <stdio.h>

int main()
{
	int m=29,*ab;
	printf("Address of m : %p\n",&m);
	printf("Value of m : %d \n",m);
	ab=&m;
	printf(" Now ab is assigned with the address of m . \n");
	printf("Address of pointer ab : %p \n",ab);
	printf("Content of pointer ab : %d \n",*ab);
	m=34;
	printf("The value of m is assigned to 34 now . \n ");
	printf("Address of pointer ab : %p \n",ab);
	printf("Content of pointer ab : %d \n",*ab);
	*ab=7;
	printf("The pointer variable ab is assigned with the value 7 now . \n");
	printf("Address of m: %p \n",&m);
	printf("Value of m: %d",m);
}
