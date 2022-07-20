#include<conio.h>
#include<stdio.h>
#include <iostream>
#include<math.h>
using namespace std;

int main ()
{
 	float imc, peso, altura;
 	
cout<<"Qual a sua altura: ";
cin>>altura;
cout<<"Qual o seu peso: ";
cin>>peso;
imc=peso/pow(altura,2);
cout<<"O IMC sera de: "<<imc;
getch();
}
