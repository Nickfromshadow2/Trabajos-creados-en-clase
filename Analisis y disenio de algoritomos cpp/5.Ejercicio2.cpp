//Mariely Nicol Hiraeta Henrriquez
//202510050220
/*Escribe un programa que lea de la entrada estandar el precio de un producto y muestre en 
la salida estandar el precio del producto al aplicarle el Iva*/

#include<iostream>
using namespace std;

int main()
{
	int costo=0,iva;
	
	cout<<"Ingrese el precio del producto"<<endl;
	cin>>costo;
	iva=costo+(costo*0.15);
	
	cout<<"El precio total seria de: "<<iva<<endl;
	return 0;
}