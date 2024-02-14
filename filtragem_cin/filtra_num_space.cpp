#include <iostream>
#include <string>

// prototipo da função que testa a string
bool testa_word(std::string word);

//variáveis globais
std::string word;
bool flag = false;

int main()
{
  do
  {
    system("clear");
    std::cout << "Digite uma palavra: ";
    std::cin.ignore();
    std::getline(std::cin, word);
    testa_word(word);
 /*   if (flag==false)
    {
      std::cout << "\n\n\n\t ...formato invalido!\n\ttecle <ENTER> para continuar";
      scanf("%*[^\n]%*c");
      //system("clear");
    }
*/
  } while (flag == false);

  return 0;
}

bool testa_word(std::string word)
{

  for (int i = 0; i < word.length(); i++)
  {
	if (isalpha(word[i]))
    {
		flag = true;
    }
    else if (static_cast<int>(word[i]) == 32)
    {
		std::cout << "\n\n\n\t ...formato invalido!\n\ttecle <ENTER> para continuar";
		scanf("%*[^\n]%*c");
		system("clear");
		flag=false;
		return flag;
    }
    else
    {
		std::cout << "\n\n\n\t ...formato invalido!\n\ttecle <ENTER> para continuar";
		scanf("%*[^\n]%*c");
		system("clear");
		flag=false;
		return flag;
    }
  }
  return flag;
}
