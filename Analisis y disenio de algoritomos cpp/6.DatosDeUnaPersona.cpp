//Mariely Nicol Hiraeta Henrriquez
//202510050220
/*Realice un programa que lea de la entrada estandar los siguientes datos 
de una persona*/

#include<iostream>
using namespace std;

int main()
{
	int edad;
	char sexo[10];
	float altura;
	
	cout<<"Digite su edad: "; cin>>edad;
	cout<<"Digite su sexo: "; cin>>sexo;
	cout<<"Digite su altura en metros : "; cin>>altura;
	
	cout<<"\nEdad: "<<edad<<endl;
	cout<<"sexo: "<<sexo<<endl;
	cout<<"altura en metros: "<<altura<<endl;
	
	return 0;
}