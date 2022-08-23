/*
 * ex4.c
 *
 *  Created on: Oct 30, 2021
 *      Author: salim
 */
#include <stdio.h>

int power(int , int );
int main()
{
	int a,n;
	printf("Enter base number : \n");
	fflush(stdout);
	scanf("%d",&a);
	printf("Enter power number : \n");
	fflush(stdout);
	scanf("%d",&n);
	printf("%d",power(a,n));
}
int power(int a , int n)
{
	if(n>1)
	{
	n--;
	return a*power(a,n);
	}
	else if(n==1)
	return a;
	else return 1;

}

