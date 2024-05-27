  #include<iostream> 

  int diaDaSemana;
   
 int main() {  
   system("clear");

    std::cout << "#################################\n";
    std::cout << "#      Digite um numero         #\n";
    std::cout << "#         para o dia            #\n";
    std::cout << "#    da semana desejado:        #\n";
    std::cout << "#                               #\n";
    std::cout << "#    1 -Segunda - feira         #\n";
    std::cout << "#    2 - Terça - Feira          #\n";
    std::cout << "#    3 - Quarta - Feira         #\n";
    std::cout << "#    4 - Quinta - Feira         #\n";
    std::cout << "#    5 - Sexta - Feira          #\n";
    std::cout << "#    6 - Sábado                 #\n";
    std::cout << "#    7 - Domingo                #\n";
    std::cout << "#                               #\n";
    std::cout << "#################################\n";
    std::cout << "\nDigite a sua idade : ";

    do
    {
        std::cin >> diaDaSemana;
        switch (diaDaSemana)
        {
        case 1:
            // faz algo
            break;
        case 2:
            // faz algo
            break;
        case 3:
            // faz algo
            break;
        case 4:
            exit(0);
        
        }
    }
        while (diaDaSemana != 7);

        return 0;

 }
    