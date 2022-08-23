/*
 * ex2.c
 *
 *  Created on: Sep 14, 2021
 *      Author: salim
 */

#include <stdio.h>

int factorial(int n);
void main()
{
	int a;
	printf("Enter a positive number /n ");
	fflush(stdout);
	scanf("%d",&a);
	printf("%d",factorial(a));

}
int factorial(int n)
{
if(n==0) return 1;
else return n*factorial(n-1);
}
