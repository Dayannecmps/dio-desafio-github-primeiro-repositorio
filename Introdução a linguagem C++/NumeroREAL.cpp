	#include<stdio.h>
	#include<conio.h>
	#include<iostream>
	#include<math.h>
	#include<locale.h>
	using namespace std;
	
	int main()
	{
		setlocale(LC_ALL,"Portuguese");
		
		float numero;
		
		cout<<"Digite um n�mero real: ";
		cin>>numero;
		
		if (numero<0)
		
		{
			cout<<"Esse n�mero � negativo!";
		}
		else if (numero>0)
		{
			cout<<"Esse n�mero � positivo!";
		}
		else 
		{
			cout<<"Esse n�mero � nulo!";
		}
		
		getch();
	}
