/*
 * ex2.c
 *
 *  Created on: Jul 25, 2021
 *      Author: salim
 */
#include <stdio.h>
#include <string.h>
void main()
{
	char word[100];
	int length;
	printf("Enter a string \n");
	fflush(stdin);fflush(stdout);
	gets(word);
	length=0;
	while(word[length]!='\0')
	{
		length++;
	}
	printf("length of string : %d",length);
}

