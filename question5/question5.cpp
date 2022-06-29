//NOTA : NÃO CONSEGUI COLOCAR DOIS ARQUIVOS SEPARADOS NO GITHUB, NO PROGRAMA ORIGINAL ESTAVAM SEPARADOS."

#include <iostream>
#include "eletro.cpp"
using namespace std;


/*Uma pessoa criou um arquivo (nome fornecido pelo usuário) que contém as informações de 
15 eletrodomésticos: nome da loja, telefone e preço de cada eletrodoméstico. Elabore uma 
classe chamada Eletrodomestico com esses atributos e métodos para manipulá-los 
(construtores, assessores, exibição). Desenvolva um programa que permita ler os dados deste 
arquivo  e  preencher  um  vetor  com  objetos  do  tipo  Eletrodomestico.  O  programa  também 
deve  calcular  e  gravar  em  um  outro  arquivo  (nome  fornecido  pelo  usuário)  a  média  dos 
preços cadastrados e uma relação contendo o nome e o telefone das lojas cujo preço estava 
abaixo da média. */

int main() {
  float average = 0;
  int number = 3; //SWITCH TO 15 AT THE END!!!!
  char nomeArq[8];
  char avgArq[10];
  float sum = 0;

  Eletrodomestico e[number];

  // in this file, the data is shown
  cout << "Choose the name of the data file: ";
  cin >> nomeArq;
  FILE *arqQ5 = fopen(nomeArq, "w");

  //in this file, the average is calculated
  cout << "Choose the name of the average file: ";
  cin >> avgArq;
  FILE *avgFile5 = fopen(avgArq,"w");

  //Prints out the information filled.
  for(int i = 0; i < number; i++){
    cout << "Store n° " << (i+1);
    e[i].setData(arqQ5);
  }

  //Checks the average
  for(int i = 0; i < number; i++){
    sum += e[i].getPrice();
  }
  average = sum/number;

  fprintf(avgFile5,"The average price is: %.2f\n",average);
    

  cout << "Lojas que apresentam preço abaixo da média:\n";
  for(int i = 0; i < number; i++){
    if(e[i].getPrice() < average){
      fprintf(avgFile5,"-%s\n%s\n",e[i].name,e[i].phone);
    }
  }
}


class Eletrodomestico{
private:
  float price;

public:

  char name[15];
  char phone[9];

  void setData(FILE *arqQ5){
    cout << "\nName:";
    cin >> name;
  
    cout << "\nPhone:";
    cin >> phone;
  
    cout << "\nPrice:";
    cin >> price;
  
    getchar();
  
    fprintf(arqQ5,"%s %s %.2f",name,phone,price);  
  }

  float getPrice(){return price;}
};
