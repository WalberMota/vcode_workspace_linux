#include <iomanip>
#include<iostream>

int main(){

	int conta;
	
	float acumula{0.0};
	float media{0.0};
	float veloz{0.0};
	
	float velox[]{70.9,89.5,65.6,102.5,123.6,63.4,74.5,99.5,68.7};

	for (auto veloz:velox)
	{
		acumula +=veloz;
		conta++;
		media=acumula/conta;
		std::cout<<"Velocidade "<<conta<<" = "<<veloz<<"\n";
	}
	
		std::cout<<"\nA soma das velocidades é "<<acumula<<"\nA quantidade de velocidades "<<conta<<"\n";
		std::cout<<std::fixed<<std::setprecision(2)<<"A media de velocidade será "<<media<<" Km/h";
//std::defaultfloat isso é o padrão de comportamento do setprecision
//4 será o numero total de digitos antes e após a vírgula
//std::fixed você indica que deseja que sejam 2 numeros após a vírgula
//std::scientific indica que você deseja que seja em notação científica, potência de 10
		return 0;
}
