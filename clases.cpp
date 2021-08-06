#include <iostream>
#include <string>

using namespace std;

class Persona {
  public :
    string nombre;
    int edad;

  Persona(string n, int e){
    nombre = n;
    edad = e;
  }

  ~Persona(){
    cout << "destructor invocado" << endl;
  }

  void saludar(){
    cout << nombre << endl;
    cout << edad << endl;
  }

};

int main() {
  Persona *p = new Persona("Victor", 12);
  Persona *p2 = new Persona("Raul", 56);

  delete p2;

  p -> saludar();
  p2 -> saludar();
}
