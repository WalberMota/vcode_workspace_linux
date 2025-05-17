#include<iostream>
#include<iomanip>  //para usar std::setprecision e std::fixed
#include<limits>   //para usar std::numeric_limits

// #include<numbers>//biblioteca incluida desde c++20 - 
                    //série de constantes com precisão 17 casa decimais


int main(){
  //configurar precisão máxima de ponto flutuante para exibir
  //std::cout<<std::setprecision(std::numeric_limits<float>::max_digits10) <<std::fixed;
  
  //Para usar std::fixed, inclua o cabeçalho <iomanip> e aplique-o ao fluxo de saída,
  //normalmente std::cout.
  
  std::cout << std::fixed << std::setprecision(5);


  std::cout <<"Constantes da Biblioteca std::numbers:"<<std::endl;
  std::cout <<"pi................"<<std::numbers::pi<<std::endl;
  std::cout <<"e................."<<std::numbers::e<<std::endl;
  std::cout <<"log2e............."<<std::numbers::log2e<<std::endl;
  std::cout <<"log10e............"<<std::numbers::log10e<<std::endl;

  return 0;
}

