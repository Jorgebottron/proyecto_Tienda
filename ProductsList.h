//Incluyo las librerías necesarias
#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include "Product.h"

using namespace std;
//Creo la clase ProductList que va a imprimir la lista de productos
class ProductsList{
  //Defino los atributos
  private:
     vector<Product> totalProducts;
  //Defino los métodos
  public:
    vector<Product> getTotalProducts();   

     ProductsList();
     ProductsList(vector<Product> getTotalProducts);
};
//Imprimo todos los productos, definiendo a su vez el precio e iva
vector<Product> ProductsList::getTotalProducts() {
  vector<Product> products;
  Product product1("1: Pants",100,16);  
  products.push_back(product1);
  Product product2("2: T-shirt",125,16);  
  products.push_back(product2);
  Product product3("3: Jacket",300,16);  
  products.push_back(product3);
  Product product4("4: Socks",75,16);  
  products.push_back(product4);

  return products;
 };
//Creo el objeto por omisión
ProductsList::ProductsList(){}
//Es para que cuando se mande a llamar imprima la lista ProductsList
ProductsList::ProductsList(vector<Product> tp){
  totalProducts = tp;
}