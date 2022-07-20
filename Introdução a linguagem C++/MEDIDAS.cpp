        #include<stdio.h>
		#include<conio.h>
		#include<iostream>
		#include<locale.h>
		#include<cctype>
		#include<stdlib.h>
		using namespace std;
			
		int main()
		{
		system("color E0");
		setlocale(LC_ALL,"Portuguese");
		
		float metros,valcon=0;
		char cod;
		
		cout<<"Digite uma medida em metros: ";
		cin>>metros;
		
		cout<<"Opções de conversão:";
		cout<<"\nC - centimetros\nP - polegadas\nJ - jardas\nM - milhas";
		cout<<"\nDigite o código desejado: ";
		cin>>cod;
		cod=toupper(cod);
		
		switch(cod)
		{
			case 'C':
			valcon=metros*100;
			cout<<"Valor em centimetros: "<<valcon;
			break;
			
			case 'P':
			valcon=metros*39.37;
			cout<<"Valor em polegadas: "<<valcon;
			break;
			
			case 'J':
			valcon=metros*1.09361;
			cout<<"Valor em jardas: "<<valcon;
			break;
			
			case 'M':
			valcon=metros*0.000621;
			cout<<"Valor em milhas: "<<valcon;
			break;
			
			default:
			cout<<"A sua opção está inválida!!";
			break;

		}

getch();
}

