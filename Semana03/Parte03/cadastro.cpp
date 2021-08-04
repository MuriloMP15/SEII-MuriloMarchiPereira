#include <iostream>
#include <fstream>
#include "cadastro.h"
using namespace std;

cadastro::cadastro(string nome, string cpf, string nacionalidade, int idade){
      Nome = nome;
      CPF = cpf;
      Nacionalidade = nacionalidade;
      Idade = idade;
}

void cadastro::setDados(){
      cout << "NOME: ";
      cin >> Nome;

      cout << "CPF: ";
      cin >> CPF;

      cout << "NACIONALIDADE: ";
      cin >> Nacionalidade;

      cout << "IDADE: ";
      cin >> Idade;
}
void cadastro::getDados(){
      cout << "CPF: " << CPF << "NOME: " << Nome << "IDADE: " << Idade << "NACIONALIDADE: " << Nacionalidade << endl;
}


void add(cadastro c){
      ofstream file;
      file.open("cadastro.txt",ios::out);
      if(!file){
      cout<<"ERRO AO ABRIR ARQUIVO"<<endl;
      return 0;
      }
      c.setDados();
      file.write((string*)&s,sizeof(c));
      file.close();
      cout<<"\nCADASTRO FEITO COM SUCESSO"<<endl;
      system("pause");
      return 0;
}

void listar(cadastro c){
      ifstream file1;
      file1.open("cadastro.txt",ios::in);
      if(!file1){
        cout<<"ERRO AO ABRIR ARQUIVO";
        return 0;
     }
     file1.read((char*)&s,sizeof(s));
     c.getDados();
     file1.close();
     system("pause")
     return 0;
}

void remover();{

     system("pause");
     return 0;
}
