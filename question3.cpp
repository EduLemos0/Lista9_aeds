//NOTA : NÃO CONSEGUI COLOCAR DOIS ARQUIVOS SEPARADOS NO GITHUB, NO PROGRAMA ORIGINAL ESTAVAM SEPARADOS."

#include <iostream>
#include "pessoa.cpp"

/*Elaborar uma classe Pessoa (código, nome, idade, endereço, número, complemento) e, após 
cadastrar os dados de várias pessoas em um vetor de objetos desta classe, gravar o conteúdo 
do  vetor  no  arquivo  cujo  nome  deve  ser  fornecido  pelo  usuário.  Na  classe  Pessoa,  crie  os 
métodos para manipular os atributos (construtores, assessores, métodos gerais). */


int main() {
  Pessoa p[10];

  for(int i = 0; i < 10; i++){
    std::cout << "Pessoa " << (i + 1) << ":"<<"\n";
    p[i].getData();
  }
  
  for(int i = 0; i < 10; i++){
    std::cout << "Item Details : " << (i + 1) << "\n";
    p[i].putData();
  }
}

/*Elaborar uma classe Pessoa (código, nome, idade, endereço, número, complemento) e, após 
cadastrar os dados de várias pessoas em um vetor de objetos desta classe, gravar o conteúdo 
do  vetor  no  arquivo  cujo  nome  deve  ser  fornecido  pelo  usuário.  Na  classe  Pessoa,  crie  os 
métodos para manipular os atributos (construtores, assessores, métodos gerais). */

class Pessoa {
public:
  int codigo;
  char nome[50];
  int idade;
  char endereco[50];
  int numero;
  char complemento[50];
public:

//Pega as informações do usuario.
  void getData(){
    std::cout << "Enter codigo : ";
    std::cin >> codigo;

    getchar();
    

    std::cout << "Enter nome : ";
    std::cin >> nome;

    getchar();
    getchar();

    std::cout << "Enter idade : ";
    std::cin >> idade;

    getchar();
    getchar();

    std::cout << "Enter endereco : ";
    std::cin >> endereco;

    getchar();
    getchar();

    std::cout << "Enter numero : ";
    std::cin >> numero;

    getchar();
    getchar();

    std::cout << "Enter complemento : ";
    std::cin >> complemento;

    getchar();
    getchar();
  }

 //Imprime as informações do usuário
  void putData() {
    std::cout << "Codigo: " << codigo;
    std::cout << "Nome: " << nome;
    std::cout << "Idade: " << idade;
    std::cout << "Endereco: " << endereco; 
    std::cout << "Numero: " << numero;
    std::cout << "Complemento: " << complemento;
  }
  

};
