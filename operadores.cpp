#include<iostream>
#include<cmath>

int main()
{
std::cout << "Por favor, informe um valor em ponto flutuante: ";
long double n; // se não for long não funciona
std::cin >> n;
std::cout << "n == " << n
<< "\nn+1 == " << n+1
<< "\ntriplo de n == " << 3*n
<< "\ndobro de n == " << n+n
<< "\nn ao quadrado == " << n*n
<< "\nmetade de n == " << n/2
<< "\nraiz quadrada de n == " << sqrt(n)
<< std::endl;

}
