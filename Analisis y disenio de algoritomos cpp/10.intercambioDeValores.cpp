//Mariely Nicol Hiraeta Henrriquez
//202510050220
/*Escriba un fragmento de programa que intercambie los valores de dos variables*/

#include<iostream>
using namespace std;

int main()
{
	int x,y,aux;
	
	cout<<"Digite el valor de x: ";cin>>x;
	cout<<"Digite el valor de y: ";cin>>y;
	
	/*
	y = 5
	y = 10
	*/
	
	aux = x;
	x = y;
	y = aux;
	
	cout<<"\nEl nuevo valor de x es: "<<x<<endl;
	cout<<"El nuevo valor de y es: "<<y<<endl;
	
	return 0;
}
