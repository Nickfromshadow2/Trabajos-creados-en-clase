//Mariely Nicol Hiraeta Henrriquez
//202510050220
/*Ejecute el programa del ejercicio anterior con entradas erroneas y observe los resultados. 
Por ejemplo. introduzca un dato de tipo caracter cuando se espera un dato de tipo entero.*/

#include<iostream>
using namespace std;

int main()
{
	char nombre[20];
	float peso;
	char edad;
	
	cout<<"Digite su nombre: "; cin>>nombre;
	cout<<"Digite su peso en kg: "; cin>>peso;
	cout<<"Digite su edad: "; cin>>edad;
	
	cout<<"\nnombre: "<<nombre<<endl;
	cout<<"peso: "<<peso<<endl;
	cout<<"Edad: "<<edad<<endl;
	
	return 0;
}