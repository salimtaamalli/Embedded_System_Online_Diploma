/*
 * Ex3.c
 *
 *  Created on: Sep 20, 2021
 *      Author: salim
 */

#include <stdio.h>
void revert_input();

void main()
{
	printf("Enter a sentence : \n");
	revert_input();
}

void revert_input()
{
	char c;
	c=getchar();
	if(c!='\n')
	{
	revert_input();
	printf("%c",c);
	}
}


