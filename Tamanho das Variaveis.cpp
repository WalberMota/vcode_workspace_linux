#include <iostream>
#include<windows.h>

int main() {
	std::cout << "Tamanho char : " << "\t"<< "\t"  << sizeof(char) << std::endl;
	std::cout << "Tamanho int : " << "\t"<< "\t"  << sizeof(int) << std::endl;
	std::cout << "Tamanho short int : "<< "\t"  << sizeof(short int) << std::endl;
	std::cout << "Tamanho long int : "<< "\t"  << sizeof(long int) << std::endl;
	std::cout << "Tamanho long long int : " << sizeof(long long int) << std::endl;
	std::cout << "Tamanho float : " << "\t" << sizeof(float) << std::endl;
	//std::cout << "Tamanho float : " << sizeof(long float) << std::endl;
	std::cout << "Tamanho double : " << "\t" << sizeof(double) << std::endl;
	std::cout << "Tamanho long double : " << "\t" << sizeof(long double) << std::endl;
	std::cout << "Tamanho wchar_t : " << "\t" << sizeof(wchar_t) << std::endl;
	system("PAUSE");

	return 0;
}
