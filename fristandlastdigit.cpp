/*
Autor: WalberMota
Data da Criação: 26/04/2023
Version 01.00 
locale=en_US.UTF-8,Utf16=on,HugeFiles=on,64 bits,4 CPUs Intel(R) Core(TM) i5-5200U CPU @ 2.20GHz (306D4)
Objetivos: ler o somar o primeiro e ultimo digito de long int
Linguagem C++
 */

#include<iostream>
#include<math.h>

int main()
{
	long int num,sum=0,firstDigit,lastDigit;
	std::cout <<"Digite qualquer número: "<<"\n";
	std::cin >> num;
	
	lastDigit=num%10;
	firstDigit=num;
	while (num >= 10)
	{
	num/=10;
	}
	firstDigit=num;
	
	sum=firstDigit+lastDigit;
	
	std::cout << "Primeiro Dígito: "<<firstDigit<<"\n";
	std::cout << "Último Dígito: " <<lastDigit<<"\n";
	std::cout << "Soma dos primeiro com o ultimo dígito: "<<sum<<"\n";
	
	return 0;
}
