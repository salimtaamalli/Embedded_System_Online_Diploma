/*
 * ex3.c
 *
 *  Created on: Jul 25, 2021
 *      Author: salim
 */

#include <stdio.h>
#include <string.h>
void main()
{
	char word[100];
	int i;
	printf("Enter a string : \n");
	fflush(stdin);fflush(stdout);
	gets(word);
	for(i=0;i<strlen(word);i++) printf("%c",word[strlen(word)-i-1]);
}
