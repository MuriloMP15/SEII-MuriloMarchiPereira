#include <iostream>
#include <fstream>
#include "cadastro.h"
using namespace std;

int main(){

  cadastro c;
  int sel

  cout << "MENU\n" << endl;
  cout << "1 - LISTAR CADASTROS\n" << endl;
  cout << "2 - NOVO CADASTRO\n" << endl;
  cout << "3 - REMOVER CADASTRO\n" << endl;
  cout << "0 - SAIR" << endl << endl;
  cout << "SELECIONAR: " << endl;

  //Lendo a opcao do menu
  fflush(stdin);
  sel = getch();

    switch(sel)
      {
         case 1   //Listando cadastos
              cout << "CADASTROS:" << endl;
              listar(cadastro c);
              break;

         case 2:  //Inserindo cadastros
              cout << "NOVO CADASTRO" << endl;
              add(cadastro c);
              break;

         case 3:  //Excluindo cadastro da lista.
              remover();
              break;

         case 0:  //Sair do programa.
              system("cls");
              sel = 0;
              break;

         default: //Previne de um usuário digitar uma opcão inexistente no menu.
              system("cls");
              break;
      }

  system ("pause");
  return 0;
}
