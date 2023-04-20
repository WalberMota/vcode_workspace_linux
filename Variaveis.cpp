#include <iostream>
//#include <tchar.h>
//#include <windows.h>

int main(int argc, char * * argv) {
//	_tsetlocale(LC_ALL, _T("portuguese"));
	int numero;
	float numero2;
	numero = 45;
	numero2 = 55.56f;
	std::cout << "valor numero :" << numero << std::endl;
	std::cout << "Tamanho da variável: " << sizeof(numero) << " Bytes" << std::endl;
	std::cout << "endereço na memoria: " << & numero << std::endl;

	std::cout << "valor numero2 :" << numero2 << std::endl;
	std::cout << "Tamanho da variável: " << sizeof(numero2) << " Bytes" << std::endl;
	std::cout << "endereço na memoria: " << & numero2 << std::endl;
	//system("pause");

	return 0;
}




