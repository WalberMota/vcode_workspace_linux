#include <iostream>


//Classe Base também chamada de Superclasse, Classe Mãe/Pai
class Base
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
	float Soma(int Num1, int Num2)
	{
		return (Num1 + Num2);
	}

	//Veja que este método só poderá ser chamado(invocado) dentro do código da classe
	void MostrarResultado(int Num1, int Num2)
	{
		std::cout << "Soma de: " << Num1 << " + " << Num2 << " = " << Soma(Num1, Num2) << "\n";
	}

};

//Agora declaramos uma classe que herda da classe Base, porém ela não tem nada está vazia
//A classe derivada também é chamada de subclasse, classe filha/filho
class Derivada :public Base{};

int main()
{
	
	//Criamos um objeto a partir da classe Derivada
	Derivada Obj;
	Obj.SolicitarNumeros();
	/*Isso indica que uma classe herda tudo de sua classe Base(Superclasse) mas NÃO HERDA
	OS ITENS PRIVADOS(PRIVATE) DA SUPERCLASSE(CLASSE BASE)*/
	system("PAUSE");

	return 0;
}