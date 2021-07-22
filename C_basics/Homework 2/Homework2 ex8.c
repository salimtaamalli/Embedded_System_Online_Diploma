/*
 * ex8.c
 *
 *  Created on: Jul 20, 2021
 *      Author: salim
 */
#include <stdio.h>

void main()
{
	char oper;
	float result,op1,op2;
	printf("Enter operator either + or - or * or / : \n");
	fflush(stdout);
	scanf("%c",&oper);
	printf("Enter two operands \n");
	fflush(stdout);
	scanf("%f %f",&op1,&op2);
	if((oper=='+')||(oper=='-')||(oper=='*')||(oper=='/'))
	{

	switch(oper)
	{
	case '+':
		result=op1+op2;
	break;
	case '-':
		result=op1-op2;
	break;
	case '*':
		result=op1*op2;
	break;
	case '/':
		result=op1/op2;
	break;
	}
	printf("%f %c %f = %f \n",op1,oper,op2,result);
	}
	else printf("you entered invalid operand \n");
}
