#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<math.h>
#include <stdlib.h>
using namespace std;

int main()
{
	int numero, quadrado;
	float raizquadrada;
	for(numero=1;numero<=500;numero++)
	{
		quadrado=numero*numero;
		raizquadrada=sqrt(numero);
		,
		cout<<"\n numero;"<<numero;
		cout<<"\n Seu quadrado é:"<<quadrado;
		cout<<"\n Sua raiz quadrada é: "<<raizquadrada;
		cout<<"\n ------------------";
	}
	cout<<"\n Programa encerrado!";
getch();
}
