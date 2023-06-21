#include<iostream>
#include<ctime>

void imprimefnc()
{
	std::cout << "DATA DE HOJE ..."<<"\n";

}

int main()
{

	imprimefnc();

//  faz a mesma coisa que os comandos abaixo
//	time_t a_time;
//	a_time = time(NULL);
//	
//	std::cout <<ctime(&a_time);
//	std::cout <<time(NULL);

	time_t a_time;

	time(&a_time);
	std::cout << asctime(localtime(&a_time));
	return 0;

}
