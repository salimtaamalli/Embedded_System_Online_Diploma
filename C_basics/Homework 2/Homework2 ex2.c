/*
 * ex2.c
 *
 *  Created on: Jul 19, 2021
 *      Author: salim
 */

#include <stdio.h>

void main()
{
	char a ;
	printf("Enter an alphabet : \n");
	fflush(stdout);
	scanf("%c",&a);
	if((('A'<=a)&&(a<='Z'))||(('a'<=a)&&(a<='z')))
	{
		switch(a)
		{
		case 'a':
		case 'A':
		case 'e':
		case 'E':
		case 'o':
		case 'O':
		case 'u':
		case 'U':
		case 'i':
		case 'I':
			printf("%c is vowel \n",a);
			break;
		default:
			printf("%c is a consonant",a);
		}
	}
	else
	{
		printf("%c is not an alphabet \n",a);
	}

}
