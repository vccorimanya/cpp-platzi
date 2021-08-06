#include <iostream>
#include <string>

using namespace std;

class Persona {
  private :
    string nombre;
    int edad;

  public:
   Persona(string nombre, int edad){ //constructor
    this -> nombre = nombre;
    this -> edad = edad;
    }

    ~Persona(){
      cout << "destructor invocado" << endl;
    }

    Persona &upNombre(string nombre){
      this -> nombre = nombre;
      return *this;
    }

    Persona &upEdad(int edad){
      this -> edad = edad;
      return *this;
    }

    void saludar(){
      cout << "Hola soy " << nombre << ", mi edad es " << edad <<endl;
    }

};

int main() {
  Persona *p = new Persona("Victor", 12);

  p->upNombre("POPO").upEdad(24);

  //delete p2;

  p -> saludar();

}
