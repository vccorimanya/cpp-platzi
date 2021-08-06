#include <iostream>
#include <string>

using namespace std;

int main(){

  union number_letter {
    int numero;
    char letra;
  };

  number_letter x = {'A'};

  cout << "x como numero: " << (char)x.numero << endl;
  cout << "x como letra: " << (int)x.letra << endl;

  enum dias_semana {Lunes = 'l', Martes = 'm', Miercoles = 'x'};
  dias_semana dia = Martes;

  cout << (char)dia << endl;

}