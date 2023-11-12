//Incluyo librerias necesarias
#include <iostream>
#include <string>
#include <iterator>
#include <vector>
#include "User.h"
#include "Product.h"
#include "ProductsList.h"

using namespace std;
//Empiezo el programa principal
int main(){
  //Declaro variables para guardar los datos de los usuarios y productos
  string n;
  float total = 0.0;
  //float cost = 0.0;
  float iva    = 0.0;
  float totalIva= 0.0;
  //Declaro una lista
  vector<Product> totalProducts;
  //int option sirve para crear a option que nos servirá para el while
  int option;
  //Se crea el objeto selectedProduct en base a la clase Product
  Product selectedProduct("",0.0,0.0);
  
  //Creo la lista que va almacenar los productos
  ProductsList productList;
  vector<Product> products = productList.getTotalProducts();
   
  
  //Le pido al usuario su nombre
  string userName; 
  cout << "Insert your name: ";
  cin >> userName;
  //Recubo al usuario y le explico la dinámica 
  cout << "Welcome " << userName << endl;
  cout << "This is the product menu. Choose the number of the product you want to buy: " << endl;
  //Con el for imprimo solamente el nombre de los productos en la lista
  for(Product p : products) {
    cout << p.getName() << "\n";
    }
  //Le pregunto al usuario si quiere realizar una compra
  cout <<  "¿Do you want to make a purchase (yes/no)? ";
  cin >> n;   
  
  //Empieza el ciclo
  while(n == "yes")
   {
      cout << "Enter the product number (1-4): "; 
      cin >> option;
      //Deino que el producto seleccionado va a ser la option que elija el usuario. El -1 es para que se adapte a la lista y no se olvide el primer producto
      selectedProduct = products.at(option - 1);
      //Agrego el objeto seleccionado a la lista totalProducts
      totalProducts.push_back(selectedProduct);
      //Calculo el iva
      iva = selectedProduct.getPrice() * 0.16;
      //Calculo el precio total que es la suma del costo y del iva
      total = total + (selectedProduct.getPrice() + iva ); 
      //Calculo la cantidad total de dinero que se aumenta gracias al iva
      totalIva = totalIva + iva;
     //Le muestro al usuario cuanto cuesta el producto
      cout <<  "The cost of your product is: $" << selectedProduct.getPrice() << endl ;
     //Le muestro al usuario cuanto vale el iva
      cout <<  "And the IVA of the product is: $" << selectedProduct.getIva() << endl;
     //Le pregunto al usuario si quiere hacer otra compra
      cout <<  "¿Do you want to make another purchase (yes/no)? ";
      cin >> n;
     }

  //Imprimo los datos finales
  User user1(userName, total, totalIva );

  
  cout << "The total cost of your purchases is: $" << total << endl;
  cout << "The total cost of IVA is: " << totalIva << endl;

  cout << "The products you buy are:";
  for(Product p : totalProducts) {
     cout << p.getName() << "\n";
  }
  
  return 0;
}

