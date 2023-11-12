//ifndef y define sirve para que si se usa un objeto en otra clase y no esta defino se defina, y si ya está definido lo deje como está
#ifndef __PRODUCT__
#define __PRODUCT__
#include <iostream>
#include <string>

using namespace std;

class Product{
  //Defino los atributos
  private:
    string name;
    float price;
    float iva;
  //Defino los métodos
  public:
    string getName();
    string setName(string name);
    float getPrice();
    float setPrice(float price);
    float getIva();
    float setIva(float iva);
    //Defino el objeto por omisión
    Product();
    //Defino el objeto Product donde se define el tipo de producto, costo y el valor del iva
    Product(string n, float cos, float iv);
};
//endif sirve para detener el ifndef y el define
#endif

