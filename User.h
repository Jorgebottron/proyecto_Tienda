#include <iostream>
#include <string>

using namespace std;
//Definimos la clase User para que el usuario se presente y se gusrden sus datos del total a pagar (totalSell) y el total que se agregó por el iva (totalIva)
class User{
  //Defino los atributos
  private:
    string name;
    float totalSell;
    float totalIva;
  //Defino los métodos
  public:
    string getName();
    string setName(string name);
    float getTotalSell();
    float setTotalSell(float totalSell);

    float getTotalIva();
    float setTotalIva(float totalIva);
    //Objeto por omisión
    User();
    //Objeto user
    User(string n, float tt, float ti);
};
//Creo objeto por omisión
User::User(){
  name = "";
  totalSell = 0.0;
  totalIva = 0.0;

}
//Creo el objeto user
User::User(string n, float tt, float ti){
  name = n;
  totalSell = tt;
  totalIva = ti;
}
//Defino GETTERS y SETTERS
string User::getName(){
  return name;
}

string User::setName(string name){
  return name;
}

float User::getTotalSell(){
  return totalSell;
}

float User::setTotalSell(float totalSell){
  return totalSell;
}

float User::getTotalIva(){
  return totalIva;
}

float User::setTotalIva(float totalIva){
  return totalIva;
}

