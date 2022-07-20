#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<cctype>
#include<locale.h>
#include<math.h>

using namespace std;
int main()
{
	setlocale(LC_ALL,"Portuguese");
	
	float valorveiculo, ipva;
	char cate;
	
	cout<<"Digite o valor do veiculo: ";
	cin>>valorveiculo;
	cout<<"\n";
	cout<<"A - Automóveis, utilitários, caminhonetes cabine dupla. \n B- Pick-ups e furgões de carga. \n C- Taxi, escolar. \n D- Motocicletas. \n E- Veículos de locadoras \n F- Ônibus, micro ônibus, caminhão, trator.";
	cout<<"\n";
	cout<<"\n";
	cout<<"Digite qual a categoria do veiculo: A - F ";
	cin>>cate;
	cate=toupper(cate);
	
	switch(cate)
	{
		case'A':
		ipva=valorveiculo*0.04;
		cout<<"O valor do IPVA desse veiculo será de R$: "<<ipva;
		break;
		
		case'B':
		ipva=valorveiculo*0.03;
		cout<<"O valor do IPVA desse veiculo será de R$: "<<ipva;
		break;
		
		case'C':
		ipva=valorveiculo*0.02;
		cout<<"O valor do IPVA desse veiculo será de R$: "<<ipva;
		break;
		
		case'D':
		ipva=valorveiculo*0.02;
		cout<<"O valor do IPVA desse veiculo será de R$: "<<ipva;
		break;
		
		case'E':
		ipva=valorveiculo*0.01;
		cout<<"O valor do IPVA desse veiculo será de R$: "<<ipva;
		break;
		
		case'F':
		ipva=valorveiculo*0.01;
		cout<<"O valor do IPVA desse veiculo será de R$: "<<ipva;
		break;
		
		default:
		cout<<"Você digitou uma categoria invalida!!";
		break;
	}
	getch();
}
