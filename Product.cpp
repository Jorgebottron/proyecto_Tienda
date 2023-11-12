//Creo esta clase para trabajar con Product.h y poder definir los productos que voy a utilizar
#include "Product.h"
//Objeto por omisión
Product::Product(){
  name = "";
  price = 0.0;
  iva = 0.0;
}
//Objeto donde se define el producto
Product::Product(string n, float p, float iv){
  name = n;
  price = p;
  iva = iv;
}
//Definimos GETTER Y SETTERS
string Product::getName(){
  return name;
}
string Product::setName(string name){
  return name;
}

float Product::getPrice(){
  return price;
}
float Product::setPrice(float price){
  return price;
}

float Product::getIva(){
  return iva;
}
float Product::setIva(float iva){
  return iva;
}