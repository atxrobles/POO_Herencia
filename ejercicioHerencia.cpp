/* Ejercicio sobre herencia con seis superclases y tres subclases cada uno */
#include <iostream>
#include <time.h>

using namespace std;

class Automovil{
private:
  string color, marca, modelo;
  int capacidadTanque, kilometraje;

public:
  Automovil(string, string, string, int, int);
  void datosAutomovil();
  void arrancarMotor();
  void avanzar();
  void retroceder();
  void sonarClaxon();
};

// Primera subclase
class Deportivo:public Automovil{
private:
  string aleron;
  int velMaxima;

public:
  Deportivo(string, string, string, int, int, string, int);
  void datosDeportivo();
  void altaVelocidad();
};

// Segunda subclase
class Urban:public Automovil{
private:
  string uso;
  int numAsientos;

public:
  Urban(string, string, string, int, int, string, int);
  void datosUrban();
  void abrirPuertaVagon();
};

// Tercera subclase
class Camioneta:public Automovil{
private:
  string tipoCaja;
  int numAsientosCabina;

public:
  Camioneta(string, string, string, int, int, string, int);
  void datosCamioneta();
  void abrirPuertaCaja();
};

Automovil::Automovil(string _color, string _marca, string _modelo, int _capacidadTanque, int _kilometraje){
  color = _color;
  marca = _marca;
  modelo = _modelo;
  capacidadTanque = _capacidadTanque;
  kilometraje = _kilometraje;
}

// Constructor de primera subclase
Deportivo::Deportivo(string _color, string _marca, string _modelo, int _capacidadTanque, int _kilometraje, string _aleron, int _velMaxima):Automovil(_color, _marca, _modelo, _capacidadTanque, _kilometraje){
  aleron = _aleron;
  velMaxima = _velMaxima;
}

// Constructor de segunda subclase
Urban::Urban(string _color, string _marca, string _modelo, int _capacidadTanque, int _kilometraje, string _uso, int _numAsientos):Automovil(_color, _marca, _modelo, _capacidadTanque, _kilometraje){
  uso = _uso;
  numAsientos = _numAsientos;
}

//Constructor de tercera subclase
Camioneta::Camioneta(string _color, string _marca, string _modelo, int _capacidadTanque, int _kilometraje, string _tipoCaja, int _numAsientosCabina):Automovil(_color, _marca, _modelo, _capacidadTanque, _kilometraje){
  tipoCaja = _tipoCaja;
  numAsientosCabina = _numAsientosCabina;
}

// Metodos de la superclase
void Automovil::datosAutomovil(){
  cout << "Color: " << color << "\t\tMarca: " << marca << "\nModelo: " << modelo << "\tCapacidad del Tanque: " << capacidadTanque << "\nKilometraje: " << kilometraje << endl;
}

void Automovil::arrancarMotor(){
  cout << "El motor del automovil " << marca << " color " << color << " se ha encendido" << endl;
}

void Automovil::avanzar(){
  cout << marca << " avanzando..." << endl;
}

void Automovil::retroceder(){
  cout << marca << " retrocediendo..." << endl;
}

void Automovil::sonarClaxon(){
  cout << "Claxon del " << marca << ": Tu Tu TUU!!" << endl;
}

// Metodos subclases
// Metodos de la primer subclase
void Deportivo::altaVelocidad(){
  cout << "Velocidad a 180 Km/h... " << endl;
}

void Deportivo::datosDeportivo(){
  datosAutomovil();
  cout << "Alerón: " << aleron << "\t\tVelocidad Máxima: " << velMaxima << endl;
  arrancarMotor();
  avanzar();
  retroceder();
  sonarClaxon();
  altaVelocidad();
}

// Metodos de la segunda subclase
void Urban::abrirPuertaVagon(){
  cout << "Puerta del vagón abierta" << endl;
}

void Urban::datosUrban(){
  datosAutomovil();
  cout << "Uso: " << uso << "\t\tNúmero de Asientos: " << numAsientos << endl;
  arrancarMotor();
  avanzar();
  retroceder();
  sonarClaxon();
  abrirPuertaVagon();
}

// Metodos de la tercera subclase
void Camioneta::abrirPuertaCaja(){
  cout << "La puerta de la caja está abierta" << endl;
}
void Camioneta::datosCamioneta(){
  datosAutomovil();
  cout << "Tipo de Caja: " << tipoCaja << "\t\tNúmero de Asientos en Cabina: " << numAsientosCabina << endl;
  arrancarMotor();
  avanzar();
  retroceder();
  sonarClaxon();
  abrirPuertaCaja();
}

// Superclase Celular
class Celular{
 private:
  string material, camara, sistemaOperativo, marca, modelo;

 public:
  Celular(string, string, string, string, string);
  void datosCelular();
  void llamar();
  void mandarMensaje();
  void linterna();
  void alarma();
};

// Primer subclase
class Smartphone:public Celular{
private:
  string sensorHuellas, botones;

public:
  Smartphone(string, string, string, string, string, string, string);
  void gestosMovimiento();
  void datosSmartphone();
};

// Segunda subclase
class Basico:public Celular{
private:
  string teclado, pantalla;

public:
  Basico(string, string, string, string, string, string, string);
  void darHora();
  void datosBasico();
};

// Tercera subclase
class Plegable:public Celular{
private:
  string usoSegundaPantalla, botonesMultimedia;

public:
  Plegable(string, string, string, string, string, string, string);
  void responderLlamada();
  void datosPlegable();
};

// Constructor de la superclase
Celular::Celular(string _material, string _camara, string _sistemaOperativo, string _marca, string _modelo){
  material = _material;
  camara = _camara;
  sistemaOperativo = _sistemaOperativo;
  marca = _marca;
  modelo = _modelo;
}

// Constructor de la primer subclase
Smartphone::Smartphone(string _material, string _camara, string _sistemaOperativo, string _marca, string _modelo, string _sensorHuellas, string _botones):Celular(_material, _camara, _sistemaOperativo, _marca, _modelo){
  sensorHuellas = _sensorHuellas;
  botones = _botones;
}

// Constructor de la segunda subclase
Basico::Basico(string _material, string _camara, string _sistemaOperativo, string _marca, string _modelo, string _teclado, string _pantalla):Celular(_material, _camara, _sistemaOperativo, _marca, _modelo){
  teclado = _teclado;
  pantalla = _pantalla;
}

// Constructor de la tercer subclase
Plegable::Plegable(string _material, string _camara, string _sistemaOperativo, string _marca, string _modelo, string _usoSegundaPantalla, string _botonesMultimedia):Celular(_material, _camara, _sistemaOperativo, _marca, _modelo){
  usoSegundaPantalla = _usoSegundaPantalla;
  botonesMultimedia = _botonesMultimedia;
}

// Metodos Superclase
void Celular::llamar(){
  cout << "Llamando a Seleny..." << endl;
}

void Celular::mandarMensaje(){
  cout << "Mensaje enviado a Karina" << endl;
}

void Celular::linterna(){
  cout << "Linterna encendida. c==[ ---< |" << endl;
}

void Celular::alarma(){
  cout << "Siguiente alarma sonará a las 6:15" << endl;
}

void Celular::datosCelular(){
  cout << "Material: " << material << "\t\tCamara: " << camara << "\nSO: " << sistemaOperativo << "\t\tMarca: " << marca << "\nModelo: " << modelo << endl;
  llamar();
  mandarMensaje();
  linterna();
  alarma();
}

// Metodos primer subclase
void Smartphone::gestosMovimiento(){
  cout << "El celular se agitó. ";
  linterna();
}

void Smartphone::datosSmartphone(){
  datosCelular();
  cout << "Tipo de lector de huellas dactilares: " << sensorHuellas << "\t\tBotones: " << botones << endl;
  gestosMovimiento();
}

// Metodos segunda subclase
void Basico::darHora(){
  time_t tiempo = time(NULL);
  struct tm *tlocal = localtime(&tiempo);
  char output[128];
  strftime(output, 128, "%d/%m/%y %H:%M:%S", tlocal);
  cout << output << endl;
}

void Basico::datosBasico(){
  datosCelular();
  cout << "Tipo de teclado: " << teclado << "\t\tTipo de Pantalla: " << pantalla << endl;
  darHora();
}

// Metodos tercer subclase
void Plegable::responderLlamada(){
  cout << "Tapa desplegada... conectando con llamada..." << endl;
}

void Plegable::datosPlegable(){
  datosCelular();
  cout << "Uso de la segunda pantalla: " << usoSegundaPantalla << "\t\tBotones multimedia: " << botonesMultimedia << endl;
  responderLlamada();
}

// Superclase Perro
class Perro{
 private:
  string nombre, color, raza, caracter;
  int edad;

 public:
  Perro(string, string, string, string, int);
  void correr();
  void ladrar();
  void comer();
  void traerLaPelota();
  void datosPerro();
};

// Primer subclase: Salchicha
class Salchicha:public Perro{
private:
  string bassetismo, variedadColor;

public:
  Salchicha(string, string, string, string, int, string, string);
  void romperseLaEspalda();
  void datosSalchicha();
};

// Segunda subclase
class Cocker:public Perro{
private:
  string origen, agresividad;

public:
  Cocker(string, string, string, string, int, string, string);
  void engordar();
  void datosCocker();
};

// Tercera subclase
class Chihuahua:public Perro{
private:
  string tipoCola;
  float peso;

public:
  Chihuahua(string, string, string, string, int, string, float);
  void valor();
  void datosChihuahua();
};

// Constructor de la superclase: Perro
Perro::Perro(string _nombre, string _raza, string _color, string _caracter, int _edad){
  nombre = _nombre;
  raza = _raza;
  color = _color;
  caracter = _caracter;
  edad = _edad;
}

// Constructor de la primer subclase
Salchicha::Salchicha(string _nombre, string _raza, string _color, string _caracter, int _edad, string _bassetismo, string _variedadColor):Perro(_nombre, _raza, _color, _caracter, _edad){
  bassetismo = _bassetismo;
  variedadColor = _variedadColor;
}

// Constructor de la segunda subclase
Cocker::Cocker(string _nombre, string _raza, string _color, string _caracter, int _edad, string _origen, string _agresividad):Perro(_nombre, _raza, _color, _caracter, _edad){
  origen = _origen;
  agresividad = _agresividad;
}

// Constructor de la tercer subclase
Chihuahua::Chihuahua(string _nombre, string _raza, string _color, string _caracter, int _edad, string _tipoCola, float _peso):Perro(_nombre, _raza, _color, _caracter, _edad){
  tipoCola = _tipoCola;
  peso = _peso;
}

// Metodos superclase
void Perro::correr(){
  cout << nombre << " está corriendo" << endl;
}

void Perro::ladrar(){
  cout << "Perro " << color << ": Guau GUAUU!!" << endl;
}

void Perro::comer(){
  cout << "Perro " << raza << " está comiendo" << endl;
}

void Perro::traerLaPelota(){
  cout << nombre << " te dio la pelota" << endl;
}

void Perro::datosPerro(){
  cout << "Nombre: " << nombre << "\t\tColor: " << color << "\nRaza: " << raza << "\t\tCaracter: " << caracter << "\nEdad: " << edad << endl;
  correr();
  ladrar();
  comer();
  traerLaPelota();
}

// Metodos primer subclase
void Salchicha::romperseLaEspalda(){
  cout << "Su espalda se rompió" << endl;
}

void Salchicha::datosSalchicha(){
  datosPerro();
  cout << "Bassetismo: " << bassetismo << "\t\tVariedad de color: " << variedadColor << endl;
  romperseLaEspalda();
}

// Metodos segunda subclase
void Cocker::engordar(){
  cout << "Está subiendo de peso" << endl;
}

void Cocker::datosCocker(){
  datosPerro();
  cout << "Origen: " << origen << "\t\tAgresividad: " << agresividad << endl;
  engordar();
}

// Metodos tercer subclase
void Chihuahua::valor(){
  cout << "Su valor ha aumentado" << endl;
}

void Chihuahua::datosChihuahua(){
  datosPerro();
  cout << "Tipo de cola: " << tipoCola << "\t\tPeso: " << peso << endl;
  valor();
}

// Superclase ROBOT
class Robot{
private:
  string tamanio, material, uso, tipoMotricidad;

public:
  Robot(string, string, string, string);
  void avanzar();
  void retroceder();
  void cargar();
  void reconocerObjeto();
  void datosRobot();
};

// Primer subclase: Antropomorfico
class Antropomorfico:public Robot{
private:
  string piernas, brazos;

public:
  Antropomorfico(string, string, string, string, string, string);
  void gesticular();
  void saludar();
  void datosAntropomorfico();
};

// Segunda subclase: Explorador
class Explorador:public Robot{
private:
  string  oruga;
  int panelSolar;

public:
  Explorador(string, string, string, string, string, int);
  void fotografiar();
  void moverObstaculo();
  void datosExplorador();
};

// Tercer subclase: Industrial
class Industrial:public Robot{
private:
  string color, garra;

public:
  Industrial(string, string, string, string, string, string);
  void usarGarra();
  void seleccionar();
  void datosIndustrial();
};

// Constructor superclase
Robot::Robot(string _tamanio, string _material, string _uso, string _tipoMotricidad){
  tamanio = _tamanio;
  material = _material;
  uso = _uso;
  tipoMotricidad = _tipoMotricidad;
}

// Constructor primer subclase
Antropomorfico::Antropomorfico(string _tamanio, string _material, string _uso, string _tipoMotricidad, string _piernas, string _brazos):Robot(_tamanio, _material, _uso, _tipoMotricidad){
  piernas = _piernas;
  brazos = _brazos;
}

// Constructor segunda subclase
Explorador::Explorador(string _tamanio, string _material, string _uso, string _tipoMotricidad, string _oruga, int _panelSolar):Robot(_tamanio, _material, _uso, _tipoMotricidad){
  oruga = _oruga;
  panelSolar = _panelSolar;
}

// Constructor tercera subclase
Industrial::Industrial(string _tamanio, string _material, string _uso, string _tipoMotricidad, string _color, string _garra):Robot(_tamanio, _material, _uso, _tipoMotricidad){
  color = _color;
  garra = _garra;
}

// Metodos Superclase
void Robot::avanzar(){
  cout << "El robot " << uso << " está avanzando" << endl;
}

void Robot::retroceder(){
  cout << "El robot " << uso << " está retrocediendo" << endl;
}

void Robot::cargar(){
  cout << "El robot de " << material << " cargó el objeto" << endl;
}

void Robot::reconocerObjeto(){
  cout << "Objeto reconocido" << endl;
}

void Robot::datosRobot(){
  cout << "Tamaño: " << tamanio << "\t\tMaterial: " << material << "\nUso: " << uso << "\t\tTipo de Motricidad: " << tipoMotricidad << endl;
  avanzar();
  retroceder();
  cargar();
  reconocerObjeto();
}

// Metodos primer subclase
void Antropomorfico::gesticular(){
  cout << "El robot está sonriendo" << endl;
}

void Antropomorfico::saludar(){
  cout << "El robot está saludando" << endl;
}

void Antropomorfico::datosAntropomorfico(){
  datosRobot();
  cout << "Piernas: " << piernas << "\t\tBrazos: " << brazos << endl;
  gesticular();
  saludar();
}

// Metodos segunda subclase
void Explorador::fotografiar(){
  cout << "Fotografía tomada: Guardando..." << endl;
}

void Explorador::moverObstaculo(){
  cout << "Obstaculo retirado" << endl;
}

void Explorador::datosExplorador(){
  datosRobot();
  cout << "Número de paneles solares: " << panelSolar << "\t\tOruga: " << oruga << endl;
  fotografiar();
  moverObstaculo();
}

// Metodos tercer subclase
void Industrial::usarGarra(){
  cout << "Garra activada" << endl;
}

void Industrial::seleccionar(){
  cout << "Objeto separado" << endl;
}

void Industrial::datosIndustrial(){
  datosRobot();
  cout << "Color: " << color << "\t\tTipo de garra: " << garra << endl;
  usarGarra();
  seleccionar();
}

// Superclase MOCHILA
class Mochila{
private:
  string color, marca;
  int numBolsas, numAsas;

public:
  Mochila(string, string, int, int);
  void cerrarCierre();
  void abrirCierre();
  void cargar();
  void meterObjetos();
  void datosMochila();
};

// Primer subclase: Deportiva
class Deportiva:public Mochila{
private:
  string grande;
  int numCompartimentos;

public:
  Deportiva(string, string, int, int, string, int);
  void datosDeportiva();
};

// Segunda subclase: Escolar
class Escolar:public Mochila{
private:
  string ruedas, agarradera;

public:
  Escolar(string, string, int, int, string, string);
  void rodar();
  void extenderAgarradera();
  void datosEscolar();
};

// Tercer subclase: Oficina
class Oficina:public Mochila{
private:
  string elegante, bolsaElectronicos;

public:
  Oficina(string, string, int, int, string, string);
  void velcro();
  void datosOficina();
};

// Constructor Superclase
Mochila::Mochila(string _color, string _marca, int _numBolsas, int _numAsas){
  color = _color;
  marca = _marca;
  numBolsas = _numBolsas;
  numAsas = _numAsas;
}

// Constructor primer subclase
Deportiva::Deportiva(string _color, string _marca, int _numBolsas, int _numAsas, string _grande, int _numCompartimentos):Mochila(_color, _marca, _numBolsas, _numAsas){
  grande = _grande;
  numCompartimentos = _numCompartimentos;
}

// Constructor segunda subclase
Escolar::Escolar(string _color, string _marca, int _numBolsas, int _numAsas, string _ruedas, string _agarradera):Mochila(_color, _marca, _numBolsas, _numAsas){
  ruedas = _ruedas;
  agarradera = _agarradera;
}

// Constructor tercera subclase
Oficina::Oficina(string _color, string _marca, int _numBolsas, int _numAsas, string _elegante, string _bolsaElectronicos):Mochila(_color, _marca, _numBolsas, _numAsas){
  elegante = _elegante;
  bolsaElectronicos = _bolsaElectronicos;
}

// Metodos superclase
void Mochila::cerrarCierre(){
  cout << "Cierre cerrado" << endl;
}

void Mochila::abrirCierre(){
  cout << "Cierre abierto" << endl;
}

void Mochila::cargar(){
  cout << "Mochila puesta" << endl;
}

void Mochila::meterObjetos(){
  cout << "La mochila " << color << " " << marca << " está llena" << endl;
}

void Mochila::datosMochila(){
  cout << "Color: " << color << "\t\tMarca: " << marca << "\nNúmero de bolsas: " << numBolsas << "\t\tNúmero de asas: " << numAsas << endl;
  cerrarCierre();
  abrirCierre();
  cargar();
  meterObjetos();
}

// Metodos primer subclase
void Deportiva::datosDeportiva(){
  datosMochila();
  cout << "Tamaño: " << grande << "\t\tNúmero de compartimentos: " << numCompartimentos << endl;
}

// Metodos segunda subclase
void Escolar::rodar(){
  cout << "Rodando" << endl;
}

void Escolar::extenderAgarradera(){
  cout << "Agarradera extendida" << endl;
}

void Escolar::datosEscolar(){
  datosMochila();
  cout << "Rueditas: " << ruedas << "\t\tAgarradera: " << agarradera << endl;
  rodar();
  extenderAgarradera();
}

// Metodos tercer subclase
void Oficina::velcro(){
  cout << "¡Despegado!" << endl;
}

void Oficina::datosOficina(){
  datosMochila();
  cout << "Elegancia: " << elegante << "\t\tBolsas para electronicos: " << bolsaElectronicos << endl;
  meterObjetos();
  velcro();
}

// Superclase Chemarra
class Chamarra{
private:
  string material, marca, color, talla;

public:
  Chamarra(string, string, string, string);
  void cerrarCierre();
  void abrirCierre();
  void bolsas();
  void ponerse();
  void datosChamarra();
};

// primer subclase: cuero
class Cuero:public Chamarra{
private:
  string ajuste, cobertura;

public:
  Cuero(string, string, string, string, string, string);
  void datosCuero();
};

// segunda subclase: deportiva
class Deporte:public Chamarra{
private:
  string peso, comodidad;

public:
  Deporte(string, string, string, string, string, string);
  void reflejar();
  void datosDeporte();
};

// tercera subclase: cazadora
class Cazadora:public Chamarra{
private:
  string impermeable, temperatura;

public:
  Cazadora(string, string, string, string, string, string);
  void datosCazadora();
};

// Constructor superclase
Chamarra::Chamarra(string _material, string _marca, string _color, string _talla){
  material = _material;
  marca = _marca;
  color = _color;
  talla = _talla;
}

// Constructor primer subclase: cuero
Cuero::Cuero(string _material, string _marca, string _color, string _talla, string _ajuste, string _cobertura):Chamarra(_material, _marca, _color, _talla){
  ajuste = _ajuste;
  cobertura = _cobertura;
}

// Constructor segunda subclase: deportiva
Deporte::Deporte(string _material, string _marca, string _color, string _talla, string _peso, string _comodidad):Chamarra(_material, _marca, _color, _talla){
  peso = _peso;
  comodidad = _comodidad;
}

// Constructor tercera subclase: cazadora
Cazadora::Cazadora(string _material, string _marca, string _color, string _talla, string _impermeable, string _temperatura):Chamarra(_material, _marca, _color, _talla){
  impermeable = _impermeable;
  temperatura = _temperatura;
}

// Metodos superclase
void Chamarra::cerrarCierre(){
  cout << "La chamarra " << marca << " cerro el cierre" << endl;
}

void Chamarra::abrirCierre(){
  cout << "La chamarra " << marca << " abrio el cierre" << endl;
}

void Chamarra::bolsas(){
  cout << "Las bolsas de la chamarra " << color << " están llenas" << endl;
}

void Chamarra::ponerse(){
  cout << "Te pusiste la chamarra " << color << endl;
}

void Chamarra::datosChamarra(){
  cout << "Material: " << material << "\t\tMarca: " << marca << "\nColor: " << color << "\t\tTalla: " << talla << endl;
  cerrarCierre();
  abrirCierre();
  bolsas();
  ponerse();
}

// Metodos primer subclase
void Cuero::datosCuero(){
  datosChamarra();
  cout << "Ajuste: " << ajuste << "\t\tCobertura: " << cobertura << endl;
}

// Metodos segunda subclase
void Deporte::reflejar(){
  cout << "Ahora pueden verte con mayor facilidad" << endl;
}

void Deporte::datosDeporte(){
  datosChamarra();
  cout << "Peso: " << peso << "\t\tComodidad: " << comodidad << endl;
  reflejar();
}

// Metodos tercera subclase
void Cazadora::datosCazadora(){
  datosChamarra();
  cout << "Impermeable: " << impermeable << "\t\tTemperatura: " << temperatura << endl;
}

// Superclase Camion
class Camion{
private:
  string color, marca, tamanioLlantas;
  int hp;

public:
  Camion(string, string, string, int);
  void masTraccion();
  void avanzar();
  void retroceder();
  void sonarClaxon();
  void datosCamion();
};

// primer subclase: trailer
class Trailer:public Camion{
private:
  string remolque, camarote;

public:
  Trailer(string, string, string, int, string, string);
  void cargar();
  void suspension();
  void datosTrailer();
};

// segunda subclase: rigido
class Rigido:public Camion{
private:
  int numAsientos;
  string cajuela;

public:
  Rigido(string, string, string, int, int, string);
  void abrirPuerta();
  void sonarAlarma();
  void datosRigido();
};

// tercera subclase: pipa
class Pipa:public Camion{
private:
  int cisterna;
  float manguera;

public:
  Pipa(string, string, string, int, int, float);
  void expulsarAgua();
  void datosPipa();
};

// Constructor superclase
Camion::Camion(string _color, string _marca, string _tamanioLlantas, int _hp){
  color = _color;
  marca = _marca;
  tamanioLlantas = _tamanioLlantas;
  hp = _hp;
}

// Constructor primera subclase
Trailer::Trailer(string _color, string _marca, string _tamanioLlantas, int _hp, string _remolque, string _camarote):Camion(_color, _marca, _tamanioLlantas, _hp){
  remolque = _remolque;
  camarote = _camarote;
}

// Constructor segunda subclase
Rigido::Rigido(string _color, string _marca, string _tamanioLlantas, int _hp, int _numAsientos, string _cajuela):Camion(_color, _marca, _tamanioLlantas, _hp){
  numAsientos = _numAsientos;
  cajuela = _cajuela;
}

// Constructor tercera subclase
Pipa::Pipa(string _color, string _marca, string _tamanioLlantas, int _hp, int _cisterna, float _manguera):Camion(_color, _marca, _tamanioLlantas, _hp){
  cisterna = _cisterna;
  manguera = _manguera;
}

// Metodos superclase
void Camion::masTraccion(){
  cout << "El camión " << marca << " ha aumentado su tracción" << endl;
}

void Camion::avanzar(){
  cout << "Ha avanzado el camión " << color << endl;
}

void Camion::retroceder(){
  cout << "Ha retrocedido el camión " << color << endl;
}

void Camion::sonarClaxon(){
  cout << "Camión " << marca << ": Sonó el claxón" << endl;
}

void Camion::datosCamion(){
  cout << "Color: " << color << "\t\tMarca: " << marca << "\nTamaño de las llantas: " << tamanioLlantas << "\t\tCaballos de fuerza: " << hp << endl;
  masTraccion();
  avanzar();
  retroceder();
  sonarClaxon();
}

// Metodos primer subclase
void Trailer::cargar(){
  cout << "Remolque lleno" << endl;
}

void Trailer::suspension(){
  cout << "La suspensión amortiguó el peso de la carga" << endl;
}

void Trailer::datosTrailer(){
  datosCamion();
  cout << "Remolque: " << remolque << "\t\tCamarote: " << camarote << endl;
  cargar();
  suspension();
}

// Metodos segunda subclase
void Rigido::abrirPuerta(){
  cout << "Puerta abierta" << endl;
}

void Rigido::sonarAlarma(){
  cout << "¡ALERTA!" << endl;
}

void Rigido::datosRigido(){
  datosCamion();
  cout << "Número de asientos: " << numAsientos << "\t\tCajuela: " << cajuela << endl;
  abrirPuerta();
  sonarAlarma();
}

// Metodos tercera subclase
void Pipa::expulsarAgua(){
  cout << "La manguera de " << manguera << "m ahora está expulsando agua" << endl;
}

void Pipa::datosPipa(){
  datosCamion();
  cout << "Capacidad de la cisterna: " << cisterna << "\t\tLongitud de la manguera: " << manguera << endl;
  expulsarAgua();
}

int main(){
  Deportivo mustang("Naranja", "Mustang", "GTX 2019", 350, 0, "Pequeño", 200);
  Urban combi("Blanco", "Urvan", "Urvan 2010", 250, 10000, "Transporte", 4);
  Camioneta pickup("Negra", "FORD", "Pick Up 2017", 200, 500, "Carga", 3);
  mustang.datosDeportivo();
  cout << endl;
  combi.datosUrban();
  cout << endl;
  pickup.datosCamioneta();

  Smartphone motorola("Aluminio y plastico", "15 Mpx", "Android Oreo", "Motorola", "G5", "Deslizar", "Multimedia y encendido");
  Basico alcatel("Plastico", "3 Mpx", "Simbyan OS", "Alcatel", "One Touch", "alfanumerico", "led");
  Plegable nokia("Fibra de vidrio, plastico y aluminio", "10 Mpx", "Java", "Nokia", "Nokia 8110", "Vista multimedia", "Volumen, pausa p/s canción");
  cout << endl;
  motorola.datosSmartphone();
  cout << endl;
  alcatel.datosBasico();
  cout << endl;
  nokia.datosPlegable();

  Salchicha willis("Willis", "Salchicha", "Negro", "Terco, jugueton", 4, "bajo", "bicolor");
  Cocker odin("Odín", "Cocker", "Miel", "Agresivo", 10, "Inglés", "Alta");
  Chihuahua pablo("Pablo", "Chihuahueño", "Claro", "Flojo", 5, "Corta", 6.5);
  cout << endl;
  willis.datosSalchicha();
  cout << endl;
  odin.datosCocker();
  cout << endl;
  pablo.datosChihuahua();

  Antropomorfico a_01("Mediano", "Acero, titanio, fibra de carbono y magnesio", "Militar", "Mecánico", "Si", "Si");
  Explorador curiosito("Pequeño", "Acero", "Explorador", "Hidraulico y neumatico", "Reforzada", 4);
  Industrial megatech("Grande", "Titanio", "Industrial","Hidraulico", "Amarillo", "Doble");
  cout << endl;
  a_01.datosAntropomorfico();
  cout << endl;
  curiosito.datosExplorador();
  cout << endl;
  megatech.datosIndustrial();

  Deportiva nike("Negra", "Nike", 5, 2, "Larga", 3);
  Escolar primaria("Azul", "Chenson", 3, 1, "Grusesas", "Sencilla");
  Oficina propia("Negra", "Swiss Gear", 2, 3, "Muy elegante", "Laptop y tablet");
  cout << endl;
  nike.datosDeportiva();
  cout << endl;
  primaria.datosEscolar();
  cout << endl;
  propia.datosOficina();

  Cuero biker("Cuero", "Chiconcuac", "Negra", "L", "No ajustada", "Cubre viento");
  Deporte adidas("Satín", "Adidas", "Verde", "M", "Ligera", "Muy comoda");
  Cazadora gusanito("?", "Gusanito", "Verde", "M", "Si", "Caliente");
  cout << endl;
  biker.datosCuero();
  cout << endl;
  adidas.datosDeporte();
  cout << endl;
  gusanito.datosCazadora();

  Trailer trailer("Rojo", "FORD", "Medianas", 100, "Doble", "Amplio");
  Rigido rigido("Blanco", "FORD", "Grandes", 150, 3, "Amplia");
  Pipa agua("Blanco", "FORD", "Pequeñas", 75, 10000, 22.5);
  cout << endl;
  trailer.datosTrailer();
  cout << endl;
  rigido.datosRigido();
  cout << endl;
  agua.datosPipa();

  return 0;
}
