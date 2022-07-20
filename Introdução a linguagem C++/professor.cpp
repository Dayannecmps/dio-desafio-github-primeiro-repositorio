#include<conio.h>
#include<stdio.h>
#include <iostream>
#include<math.h>
using namespace std;

int main ()

{
	float numaula, cp, salariobase, salarioliq;
 	
 	cout<<"Quantas aulas foram dadas no mes:";
 	cin>>numaula;
 	salariobase=numaula*27.50;
 	cp=salariobase*0.11;
 	salarioliq=salariobase-cp;
 	
 	cout<<"\nSalario base: R$ "<<salariobase;
 	cout<<"\nContribuicao Previdenciaria: R$"<<cp;
 	cout<<"\nSalario Liquido: R$"<<salarioliq;
 	
 	getch();

}
 	
