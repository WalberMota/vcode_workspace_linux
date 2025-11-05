/*
Programa:
Escrito por: Walber Mota
Linguagem: C++
Data da Criação: 
Version 01.00 
locale=en_US.UTF-8,Utf16=on,HugeFiles=on,64 bits,4 CPUs Intel(R) Core(TM)
i5-5200U CPU @ 2.20GHz (306D4)
Propósito:  mostra os caracteres ASCII e seus valores em oct, hexa e decimal

*/
#include<stdio.h>
#include<iostream>

int main()
	{
	for(int c=33;c<128;c++)
	{
		printf("valor de %c em octadecimal %o em hexadecimal %x em decimal %d \n",c,c,c,c);

	}
	return 0;
}
