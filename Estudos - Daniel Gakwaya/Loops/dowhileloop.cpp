#include <iostream>
//Você pode reduzir aproximadamente o tempo de execução em 19 da seguinte forma:
int main(int argc, char const *argv[])
{
    unsigned int current = 100;  
   std::cout << "Múltiplos de 19 entre 100 e 1000:\n\n";
  while (current%19 != 0)
     ++current;  
      
  do {
     std::cout << current << " ";
     current += 19;
  } while (current <= 1000);
    return 0;
}
