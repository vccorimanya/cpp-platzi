#include <iostream>
#include <string>

using namespace std;

struct Persona {
  string nombre;
  string apellido;
  int edad;
};

//g++ -o main Persona.cpp

int main() {
  Persona *p = new Persona(); //Dinámico
  p->nombre = "Victor";
  p->edad = 26;
  p->apellido = "Ccorimanya";
  cout << p ->nombre << endl;
  cout << p -> apellido << endl;
  cout << p->edad << endl;
}