/*A struct tm é uma struct nativa do c++:

https://cplusplus.com/reference/ctime/
https://cplusplus.com/reference/ctime/tm/
https://cplusplus.com/reference/ctime/localtime/
https://cplusplus.com/reference/ctime/time_t/

*/

#include<iostream>
#include<ctime> //biblioteca para manipular temp
//#include <stdint.h>
#include<string>

//#include <time.h>


int main(int argc, char const *argv[])
{
    time_t HoraAtual =time(0);
    tm *MinhaHora=localtime(&HoraAtual);

    
    int hora=MinhaHora->tm_hour;
    int minutos=MinhaHora->tm_min;
    int segundos=MinhaHora->tm_sec;
    
    //std::cout<<"\nHora Atual: "<<MinhaHora->tm_hour<<":"<<MinhaHora->tm_min<<":";

    std::cout<<"Hora Atual: ";
	printf("%02d:", hora);
	printf("%02d:", minutos);	
    printf("%02d\n", segundos);	


/*     int segundos=MinhaHora->tm_sec;
    
    std::cout<<"\nHora Atual: "<<MinhaHora->tm_hour<<":"<<MinhaHora->tm_min<<":";
    printf("%02d", segundos);
 */
  //  const auto fuso_hora = MinhaHora->tm_zone;
  //  std::cout<< "\nFuso Horário: "<<fuso_hora<<'\n';

  //  std::cout<<(intmax_t)HoraAtual<< " segundos desde a que a época começou (01/01/1970)\n";
  //  std::cout <<asctime(gmtime(&HoraAtual));
    
	std::cout << "\nData: " << MinhaHora->tm_mday;
	std::cout << "/" << 1+MinhaHora->tm_mon;
	std::cout << "/" << 1900 + MinhaHora->tm_year << '\n';

    return 0;
}
