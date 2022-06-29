#include <iostream>
#include "Pessoa.cpp"

//NOTA : NÃO CONSEGUI COLOCAR DOIS ARQUIVOS SEPARADOS NO GITHUB, NO PROGRAMA ORIGINAL ESTAVAM SEPARADOS."

int main() {
 Teacher f("Lorival","Cunha",0000,1200);
  std::cout << f.getSalarioPrimeiraParcela(1200);
}


class Pessoa {
private:
  char nome[50];
  char sobrenome [50];

public:
  Pessoa(char *nome, char *newSurname) {
    strcpy(this->nome, nome);
    strcpy(this->sobrenome, newSurname);
    }
    void getFullName() {
      std::cout << nome << " " << sobrenome;
    }
};


class Funcionario : public Pessoa{
private:
  int registration;
  double salary;

public:
  Funcionario(char *newName, char *newSurname, int registro, double s) : Pessoa(newName,newSurname){
    registration = registro;
   if(s > 0) salary = s;
  }

   double getSalarioPrimeiraParcela(double salary){
    double firstPart = salary * 0.6;
    return firstPart; 
    }

  double getSalarioSegundaParcela(double salary){
  double secondPart = salary * 0.4;
  return secondPart; 
  }

};


class Teacher : public Funcionario {
public:

  Teacher(char *newName, char *newSurname, int registro, double s) : Funcionario(newName, newSurname,  registro, s) {}

  

  double getSalarioPrimeiraParcela(double salary){
    return salary; 
    }

  double getSalarioSegundaParcela(double salary){
    return 0;
  }
  
};
