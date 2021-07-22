/*
 * ex5.c
 *
 *  Created on: Jul 19, 2021
 *      Author: salim
 */
#include <stdio.h>

void main()
{
	char a;
	printf("Enter a character : \n");
	fflush(stdout);
	scanf("%c",&a);
	if((('A'<=a)&&(a<='Z'))||(('a'<=a)&&(a<='z')))
	{
		printf("%c is an alphabet \n",a);
	}
	else printf("%c is not an alphabet \n",a);
}


