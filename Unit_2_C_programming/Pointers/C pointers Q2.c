#include <stdio.h>
#include <string.h>
void main()
{
	char S[100];
	char *a=&s; ;
	printf("Enter a string : \n");
	fflush(stdout);
	gets(S);
	a+=strlen(s)-1;
	printf("Reversed string : \n")
	while(a<=s) printf("%c",*a);
}
