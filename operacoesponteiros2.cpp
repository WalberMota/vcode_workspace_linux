/* Autor:Walber Mota
 Linguagem: C++
 Criado em 23/05/2023
 Objetivo: Operações com ponteiros
*/

#include <iostream>

int main()
{
	int Numero{ 4096 };
	int *ptr;
	int *ptr2;
	ptr = &Numero;
	ptr2 = ptr;
    
    std::cout << "\nValor da variável Numero: " << Numero << "\n";	
    std::cout << "\nEndereço contido dentro de ptr=&Numero: " << ptr << "\n";
	std::cout << "\nEndereço contido dentro de ptr2=ptr: " << ptr2 << "\n";
	std::cout << "\nEndereço de ptr na memória RAM: " << &ptr << "\n";
	
	//Na aula esqueci de colocar & na frente de ptr2, portanto é &ptr2
	//pois você deseja que seja buscado o endereço de memória RAM que ptr2 esta alocado e carregado

	std::cout << "\nEndereço de ptr2 na memória RAM: " << &ptr2 << "\n";
	std::cout << "\nValor de Numero agora: " << Numero << "\n";
		*ptr2 = *ptr + 10;
	std::cout << "\nValor de Numero depois de *ptr2 =*ptr + 10: " << Numero << "\n";

	return 0;
}