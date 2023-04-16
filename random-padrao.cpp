#include <iostream>
#include <cstdlib>
//#include <windows.h>
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
	cout<<"Quantos numeros quer gerar ?";
	cin >> fim;
	for (int i=0;i < fim;i++)
		cout<<rand()% N <<endl;
	//system("pause");
	return 0;
	
}