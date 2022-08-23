/*
 * Q3.c
 *
 *  Created on: Nov 26, 2021
 *      Author: salim
 */

#include <stdio.h>
#include <string.h>
void main()
{
	char S[100];
	char *a; ;
	printf("Enter a string : \n");
	fflush(stdout);
	gets(S);
	a=S+strlen(S)-1;
	printf("Reversed string : \n");
	while(a>=S)
	{
	printf("%c",*a);
	a--;
	}
}
