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
	/*A função srand() é uma função embutida na STL(Standard Template Library) do C++, que é um arquivo de cabeçalho definido em <cstdlib>. srand() é usado para inicializar geradores de números aleatórios.
A função srand() define o ponto de partida para a produção de uma série de inteiros pseudo-aleatórios. Se srand() não for chamado, a semente rand() será definida como se srand(1) tivesse sido chamado no início do programa. Qualquer outro valor para seed define o gerador para um ponto inicial diferente.

void srand(semente não assinada) ou int srand(semente int não assinada) - Semeia o gerador de números pseudo-aleatórios usado por Rand() com o valor seed, neste caso utilizando o relogio do computador como semente (seed).
seed: Uma semente para uma nova sequência de números pseudo-aleatórios a ser retornada por chamadas sucessivas a Rand().
*/

	int fim=0;
	cout<<"Quantos numeros aleatórios você deseja gerar ?";
	cin >> fim;
	for (int i=0;i < fim;i++)
		cout<<rand()% N <<endl;
	return 0;
	
}
