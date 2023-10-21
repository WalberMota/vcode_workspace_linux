/*
Autor: WalberMota
Data da Criação: 26/04/2023
Objetivos: calcula a área de um triângulo com controle do valor de input através de flags
Linguagem C++
 */

#include <iostream>
#include <cstdlib>
//#include <conio.h>

using namespace std;
int main()
{
    float b=0, h=0;
    int flag;
	cout<<"Programa para calcular a area do triagulo. Entre com valores positivos.\n";
	//inicio:
	do{
            flag=0;
	    cout<<"Digite A Base   :";
	    cin>> b;
	    cout<<"Digite A Altura :";
	    cin>> h;
	    if ((b>0)&&(h>0)){
		    b=(b*h)/2;
		    cout<<"A area do triangulo eh: " << b << endl;
	    }
	    else{
		    cout<<"Dados inseridos invalidos, insira novamente.\n";
		    //goto inicio;
		    flag=1;
	    }
	    //cout<<"     Tecle !"<<endl;
	    //getch();
	}while(flag!=0);
	return 0;
}
