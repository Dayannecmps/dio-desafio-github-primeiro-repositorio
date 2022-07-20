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
	
	float valorentrega,valorencon;
	int cod;
	
	cout<<"Digite o valor da encomenda: ";
	cin>>valorencon;
	
	cout<<"\n 1- Belo Horizonte, Contagem ou Betim: \n 2- Sabará, Nova Lima, Raposos, Caeté: \n 3- Itabirito, Ouro Preto, Mariana, Congonhas: \n 4- Sete Lagoas, Curvelo:";
	cout<<"\n";
	cout<<"\n";
	cout<<"Digite o para qual cidade será a entrega:  1 - 4:";
	cin>>cod;
	
	switch(cod)
	{
		case 1:	
		valorentrega=valorencon*0.01;
		cout<<"O valor do frete para essa cidade será de: "<<valorentrega;
		break;
		
		case 2:
		valorentrega=valorencon*0.02;
		cout<<"O valor do frete para essa cidade será de: "<<valorentrega;
		break;
		
		case 3:
		valorentrega=valorencon*0.03;
		cout<<"O valor do frete para essa cidade será de: "<<valorentrega;
		break;
		
		case 4:
		valorentrega=valorencon*0.04;
		cout<<"O valor do frete para essa cidade será de: "<<valorentrega;
		break;
		
		default:
		cout<<"Voce digitou uma opção inválida!!";
		break;
	}
	getch();
	
}
