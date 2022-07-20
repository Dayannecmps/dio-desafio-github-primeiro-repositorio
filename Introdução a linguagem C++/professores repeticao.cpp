#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<math.h>
#include<stdlib.h>
using namespace std;

int main()
{
	int matricula, numaulas, professor;
	float salbruto,saliqui,contpre;
	
	for (professor=1; professor<=3; professor++)
	{
		cout<<"\n Digite o numero da matricula: ";
		cin>>matricula;
		cout<<"\n Digite o numero de aulas dadas: ";
		cin>>numaulas;
		
		salbruto=numaulas*32;
		contpre=salbruto*0.11;
		saliqui=salbruto-contpre;
		
		cout<<"\n O salario bruto do professor e r$: "<<salbruto;
		cout<<"\n Contribuição previdenciaria: r$; "<<contpre;
		cout<<"\n O salario liquido do professor e r$; "<<saliqui;
		cout<<"\n -----------------------------------------------";
	}
	cout<<"Programa encerrado!";
	getch();
}
