/*
 Os operadores shift bit a bit são o operador shift para a direita (>>), que move os bits de uma expressão de tipo de enumeração ou inteiro para a direita, e o operador shift para a esquerda (<<), que move os bits para a esquerda.
=> Shift
O deslocamento de bits é uma operação elementar de lógica binária que consiste na rotação de um conjunto de bits (como um byte ou word, por exemplo). Devido às características do sistema binário, existe correspondência directa com as seguintes operações matemáticas:

multiplicação (por 2) do operando - caso o deslocamento seja feito para a esquerda;
divisão inteira (por 2) do operando - caso o deslocamento seja feito para a direita.
 */


#include<iostream>

int main()
{
	int var=4;
	std::cout<<"valor inicial: "<<var<<"\n";
	
	/*deslocamento de bit para a direita(divisão): 0010 -> 0001 (2 passa a ser  1)*/
	std::cout<<"shift de bit à direita: "<<(var>>1) <<"\n";
	var>>=1;
	std::cout<<"shift de bit à direita: "<<(var>>1) <<"\n";

	//volta a variavel para o valor anterior
	var=4;
	std::cout<<"\nvalor inicial: "<<var<<"\n"; //colocar o valor anterior


	/*deslocamento de bit para esquerda(multiplicação): 0010 ->0100 (4 passa a ser 8)=> var=var*(2¹)*/
	std::cout<<"shift de bit à esquerda: "<< (var<<1)<<"\n";
	var<<=1;
	std::cout<<"shift de bit à esquerda: "<< (var<<1)<<"\n";

	return 0;

}
