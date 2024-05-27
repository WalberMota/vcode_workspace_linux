  #include<iostream> 
   
 int main() {  
   system("clear");

    std::cout << "################################\n";
    std::cout << "#      Digite a sua idade       #\n";
    std::cout << "#                               #\n";
    std::cout << "#    São elegíveis as idades    #\n";
    std::cout << "# entre 21 e 39 anos(inclusive) #\n";
    std::cout << "#                               #\n";
    std::cout << "#################################\n";
    std::cout << "\nDigite a sua idade : ";
    std::cin >> idade;

    if (idade >= 21){
        if (idade <=39){
           std::cout << "\nVocê PODE receber o tratamento\n" << std::endl;
           return;
        }
    }
    std::cout << "\nSua idade não permite o tratamento\n" << std::endl;
 }