//Herencia
#include <iostream>

using namespace std;

//Clase padre (superclase)
class Automovil{
private:
  string marca;
  int matricula;

public:
  Automovil(string, int);
  void mostrarAutomovil();
};

//Clase hija (subclase)
class Sedan:public Automovil{
private:
  string modelo;
  float kilometraje;

public:
  Sedan(string, int, string, float); //atributos propios y heredados
  void datosSedan();
};

Automovil::Automovil(string _marca, int _matricula){
  marca = _marca;
  matricula = _matricula;
}

Sedan::Sedan(string _marca, int _matricula, string _modelo, float _kilometraje):Automovil(_marca, _matricula){
  modelo = _modelo;
  kilometraje = _kilometraje;
}

void Automovil::mostrarAutomovil(){
  cout << "Marca del automovil: " << marca << endl;
  cout << "Matricula del automovil: " << matricula << endl;
}

void Sedan::datosSedan(){
  mostrarAutomovil();
  cout << "Modelo del automovil: " << modelo << endl;
  cout << "Kilometraje del automovil: " << kilometraje << endl;
}

int main(){
  Sedan automovil1("Nissan", 12345, "Tsuru", 23456.68);
  automovil1.mostrarAutomovil();
  cout << endl;
  automovil1.datosSedan();

  return 0;
}
