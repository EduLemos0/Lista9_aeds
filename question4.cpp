//NOTA : NÃO CONSEGUI COLOCAR DOIS ARQUIVOS SEPARADOS NO GITHUB, NO PROGRAMA ORIGINAL ESTAVAM SEPARADOS."

#include <iostream>
#include "pessoa.cpp"
using namespace std;

int main() {
  char nome[30];
  int diaNiver;
  int mesNiver;
  int meses = 12;
  
  Pessoa p[3];

  for(int i = 0; i < 3; i++) {
    cout << "\nNOME: ";
    cin >> nome;
    cout << "DIA DO ANIVERSÁRIO: ";
    cin >> diaNiver;
    cout << "MÊS DO ANIVERSÁRIO: ";
    cin >> mesNiver;
    getchar();
    p[i].setData(nome, diaNiver, mesNiver);
  }

  for(int i = 0; i < meses ;i++){
    cout << "Pessoas nascidas no mês " << i+1 <<":\n";
    for(int j = 0; j < 3; j++){
      if (i+1 == p[j].getMes()){
        p[j].fillData();
      }
    }
  }  
}


class Pessoa {
private:  
  char nome[30];
  int diaNiver;
  int mesNiver;

public:
  void setData(char nome[10],int dia, int mes){
    strcpy(this->nome,nome);
    diaNiver = dia;
    mesNiver = mes;
  }

  int getMes(){return mesNiver;}

  void fillData(){
    cout << "-" << nome << ", nasci no dia " << diaNiver << "\n";  
  }

};
