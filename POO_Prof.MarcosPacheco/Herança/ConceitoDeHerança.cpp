#include <iostream>


class Base //Classe Base também chamada de Superclasse
{

public:
	void SolicitarNumeros()
	{
		std::cout << "Num1: ";
		std::cin >> Num1;
		std::cout << "Num2: ";
		std::cin >> Num2;
		//Chamada do método privado da classe dentro da própria classe o que é permitido
		MostrarResultado(Num1, Num2);
	}
//Aqui indica que os membros da seção privada só serão acessíveis dentro do código da classe.
private:
	float Num1, Num2;

	//Estes métodos só poderão serem chamados(invocados) dentro do código da classe Base
	void MostrarResultado(int Num1, int Num2)
	{
		std::cout << "Soma de: " << Num1 << " + " << Num2 << " = " << Soma(Num1, Num2) << "\n";
	}
		float Soma(int Num1, int Num2)
	{
		return (Num1 + Num2);
	}

};

//Agora declaramos uma classe que herda da classe Base, parece vazia mas ela herdará todos os públicos da classe Base.
class Derivada :public Base{};

int main()
{
	
	//Criamos um objeto Obj a partir da classe Derivada
	Derivada Obj;
	Obj.SolicitarNumeros();
	
	return 0;
}