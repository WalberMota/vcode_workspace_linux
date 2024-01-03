#include<iostream>
#include<algorithm> //find_if_not   
#include<iterator> //std::begin e std::end


/*========sem lamba 
bool eh_letra(char c){

    return (c>='A'&& c<='Z') || (c>='a' && c<='z');
}
int main(int argc, char const *argv[])
{
    const char str[] = "Hhsj5jsjd";
    const char *it = std::find_if_not(std::begin(str),std::end(str),eh_letra);

    std::cout << "o caracter que não é letra em str é :" << *it <<'\n';
    return 0;
}
 */


// Com lambda
#include <iostream>
#include <algorithm> // find_if_not

int main( int argc , char **argv ){
  const char str[] = "Hhsjjsjdasasa,sdas";
  auto it = std::find_if_not( std::begin(str) , std::end(str) , []( char c ){
    return ( c >= 'A' && c <= 'Z' ) || ( c >= 'a' && c <= 'z' );
  }); 
  std::cout << "O caracter que não é letra de str é: " << it << '\n';
  return 0;
}