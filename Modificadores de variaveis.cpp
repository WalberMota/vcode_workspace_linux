/* Autor:Walber Mota
 Linguagem: C++
 Criado em 07/05/2023
 Objetivo: Modificadores de variaveis
*/
#include <limits>
#include <iostream>


int main() {
	// \t insere uma tabula��o
	std::cout << "Tipo\t\t Minimo\t\t\t Maximo\n\n";

	std::cout << "bool\t\t\n\t\t"
	<< +std::numeric_limits<bool>::min() << '\t' << '\t' << '\t'
	<< +std::numeric_limits<bool>::max() << '\n';
	std::cout << "______________________________________________\n";
	std::cout << "char\t\t\n\t\t"
	<< +std::numeric_limits<char>::min() << '\t' << '\t'<< '\t'
	<< +std::numeric_limits<char>::max() << '\n';
	std::cout << "______________________________________________\n";
	std::cout << "unsigned char\t\n\t\t"
	<< +std::numeric_limits<unsigned char>::min() << '\t' << '\t'<< '\t'
	<< +std::numeric_limits<unsigned char>::max() << '\n';
	std::cout << "______________________________________________\n";
	std::cout << "short\t\t\n\t\t"
	<< +std::numeric_limits<short>::min() << '\t' << '\t'<< '\t'
	<< +std::numeric_limits<short>::max() << '\n';
	std::cout << "______________________________________________\n";
	std::cout << "unsigned short\t\n\t\t"
	<< +std::numeric_limits<unsigned short>::min() << '\t' << '\t'<< '\t'
	<< +std::numeric_limits<unsigned short>::max() << '\n';
	std::cout << "______________________________________________\n";
	std::cout << "int\t\t\n\t\t"
	<< +std::numeric_limits<int>::min() << '\t'<< '\t'
	<< +std::numeric_limits<int>::max() << '\n';
	std::cout << "______________________________________________\n";
	std::cout << "unsigned int\t\n\t\t"
	<< +std::numeric_limits<unsigned int>::min() << '\t' << '\t'<< '\t'
	<< +std::numeric_limits<unsigned int>::max() << '\n';
	std::cout << "______________________________________________\n";
	std::cout << "long int\t\n\t\t"
	<< +std::numeric_limits<long int>::min() << '\t'<< '\t'
	<< +std::numeric_limits<long int>::max() << '\n';
	std::cout << "______________________________________________\n";
	std::cout << "unsigned long int\n\t\t"
	<< +std::numeric_limits<unsigned long int>::min() << '\t' << '\t'<< '\t'
	<< +std::numeric_limits<unsigned long int>::max() << '\n';
	std::cout << "______________________________________________\n";
	std::cout << "long long int\t\n\t\t"
	<< +std::numeric_limits<long long int>::min() << '\t'
	<< +std::numeric_limits<long long int>::max() << '\n';
	std::cout << "______________________________________________\n";
	std::cout << "float\t\t\n\t\t"
	<< +std::numeric_limits<float>::min() << '\t' << '\t'
	<< +std::numeric_limits<float>::max() << '\n';
	std::cout << "______________________________________________\n";
	std::cout << "double\t\t\n\t\t"
	<< +std::numeric_limits<double>::min() << '\t' << '\t'
	<< +std::numeric_limits<double>::max() << '\n';
	std::cout << "______________________________________________\n";
	std::cout << "long double\t\n\t\t"
	<< +std::numeric_limits<long double>::min() << '\t' << '\t'
	<< +std::numeric_limits<long double>::max() << '\n'<< '\n';
	system("pause");
}
