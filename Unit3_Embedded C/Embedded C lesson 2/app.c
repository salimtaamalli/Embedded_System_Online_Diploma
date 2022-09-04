#include "uart.h"
unsigned char string_buffer[100] = "learn-in-depth:Salim" ;
void main (void)
{
	 int i ;
	Uart_Send_String(string_buffer);
}