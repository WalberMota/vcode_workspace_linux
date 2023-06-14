/* Autor:Walber Mota
 Linguagem: C++
 Criado em 09/05/2023
  Version 01.00 
 locale=en_US.UTF-8,Utf16=on,HugeFiles=on,64 bits,4 CPUs Intel(R) Core(TM)
 i5-5200U CPU @ 2.20GHz (306D4)
 Objetivo: Gerando números aleatórios com uso da semente tempo.
*/
#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main()
{
	int N=100;
	/* program is the implementation of rand() function
	   to get a value from the range 0 to N
	*/
	srand(time(0));
	/*srand() function is an inbuilt function in C++ STL, which is a header file
	defined in <cstdlib>. srand() is used to initialize random number generators.
	The srand() function sets the starting point for producing a series of 
	pseudo-random integers. If srand() is not called, the rand() seed is set as 
	if srand(1) were called at the program start. Any other value for seed sets 
	the generator to a different starting point. 
	Syntax: 
			void srand( unsigned seed );
			OR int srand( unsigned int seed);
	Seeds the pseudo-random number generator used by rand() with the value seed.
	Parameters
	seed: A seed for a new sequence of pseudo-random numbers to be returned by
	 successive calls to rand()
	*/

	int fim=0;
	cout<<"Quantos numeros aleatórios você deseja gerar ?";
	cin >> fim;
	for (int i=0;i < fim;i++)
		cout<<rand()% N <<endl;
	return 0;
	
}
