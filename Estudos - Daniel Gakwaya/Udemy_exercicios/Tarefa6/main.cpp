  #include<iostream> 

  int diaDaSemana;
   
 int main() {  
   system("clear");

    std::cout << "#################################\n";
    std::cout << "#      Digite um numero         #\n";
    std::cout << "#         para o dia            #\n";
    std::cout << "#    da semana desejado:        #\n";
    std::cout << "#                               #\n";
    std::cout << "#    1 - Segunda - feira        #\n";
    std::cout << "#    2 - Terça - Feira          #\n";
    std::cout << "#    3 - Quarta - Feira         #\n";
    std::cout << "#    4 - Quinta - Feira         #\n";
    std::cout << "#    5 - Sexta - Feira          #\n";
    std::cout << "#    6 - Sábado                 #\n";
    std::cout << "#    7 - Domingo                #\n";
    std::cout << "#    0 - Terminar               #\n";
    std::cout << "#                               #\n";
    std::cout << "#################################\n";
    std::cout << "\nDigite o numero do dia da semana desejado : ";

    do
    {
        std::cin >> diaDaSemana;
        switch (diaDaSemana)
        {
        case 1:

            std::cout << "\nO dia escolhido foi Segunda-Feira\n";
            break;
        case 2:
            std::cout << "\nO dia escolhido foi Terça-Feira\n";
            break;
        case 3:
            std::cout << "\nO dia escolhido foi Quarta-Feira\n";
            break;
        case 4:
            std::cout << "\nO dia escolhido foi Quinta-Feira\n";
            break;
        case 5:
            std::cout << "\nO dia escolhido foi Sexta-Feira\n";
            break;
        case 6:
            std::cout << "\nO dia escolhido foi Sábado\n";
            break;
        case 7:
            std::cout << "\nO dia escolhido foi Domingo\n";
            break;
        case 0:
            exit(0);
        
        }
    }
        while (diaDaSemana != 0);

        return 0;

 }
    