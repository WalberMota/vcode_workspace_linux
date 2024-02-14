#include<iostream>

int main(){
   int data;
   std::cout<<"Digite data no formato DDMMAA: ";
   std::cin>>data;

      std::cout<<"DIA: "<<data/10000<<"\n";
      std::cout<<"MES: "<<(data%10000)/100<<"\n";
      std::cout<<"ANO: "<<data%100<<"\n";


   return 0;
}
