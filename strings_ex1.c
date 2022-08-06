/*
 * strings ex1.c
 *
 *  Created on: Jul 25, 2021
 *      Author: salim
 */

# include <stdio.h>
# include <string.h>

void main()
{
	char word[100],c;
	int i,frequency=0;
	printf("Enter a string : \n");
	fflush(stdout);fflush(stdin);
	gets(word);
	printf("Enter a character to find his frequency : \n ");
	fflush(stdout);fflush(stdin);
	scanf("%c",&c);
	for (i=0;i<strlen(word);i++)
	{
		if(word[i]==c) frequency++;
	}
	printf("frequency of %c : %d",c,frequency);
}
