/*
Programa:
Escrito por: Walber Mota
Linguagem: C++
Data da Criação: 
Version 01.00 
locale=en_US.UTF-8,Utf16=on,HugeFiles=on,64 bits,4 CPUs Intel(R) Core(TM)
i5-5200U CPU @ 2.20GHz (306D4)
Propósito:  Digite um caracter do teclado e obtenha seu valor em decimal
*/
#include<iostream>

int main() 
{ 
	int e;
	char ch;
	//clrscr();
	printf("\n Enter a character : ");
	scanf("%c",&ch);
	e=ch;
	printf("\n The ASCII value of the character is : %d",e);
//	getch();
	
	return 0;
} 
