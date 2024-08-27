#include <iostream>
#include <iomanip>

int main(){

    //Antes de imprimir configura linhas e colunas
	const size_t ROWS {12}; 
	const size_t COLS {3};


    /*
	std::cout << "Visualização de dados tabulados com "loops for" aninhados: " << std::endl;
	
	for (size_t row{0} ; row < ROWS ; ++ row){
        
		for (size_t col{0} ; col < COLS ; ++col){

			std::cout  << "( row "  <<  std::setw(2) << row << ",col " << std::setw(2) <<  col << ")  ";
		}
        std::cout << std::endl;
    }

    */

   //While loop
   /*
	std::cout << std::endl;
	std::cout << "Visualização de dados tabulados com loops while aninhados" << std::endl;
	
	//Lembre-se de redefinir col para 0 após o loop interno ser concluído para a próxima linha
    // para usar as colunas corretas.
    size_t row {0};
    size_t col {0};
    
    while(row < ROWS){
        
        while(col < COLS){
            std::cout  << "( row " << std::setw(2) <<  row << ",col "<< std::setw(2) <<  col << ") ";
            ++col;
        }
        std::cout << std::endl;
        col = 0 ;   // Redefinir coluna para 0 para permitir a impressão da coluna 0.
                    // col está no escopo local da função principal agora.
        ++row;
    }

    */



	std::cout << std::endl;
	std::cout << "Visualização de dados tabulados com loops 'do while' aninhados:" << std::endl;
	
    size_t row = 0;
    size_t col = 0;
    
    do { // row
    
        do {
			std::cout  << "( row " << std::setw(2) <<  row << ",col "<< std::setw(2) <<  col << ")   ";
            ++col;
        }while(col < COLS);
        
        std::cout << std::endl;
        col = 0 ;   // Redefinir col para 0 para permitir a impressão da coluna 0.
                    // col está no escopo local da função principal agora.
        ++row;
    }while(row < ROWS);

   
    return 0;
}