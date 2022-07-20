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
		
		cout<<"Digite um número real: ";
		cin>>numero;
		
		if (numero<0)
		
		{
			cout<<"Esse número é negativo!";
		}
		else if (numero>0)
		{
			cout<<"Esse número é positivo!";
		}
		else 
		{
			cout<<"Esse número é nulo!";
		}
		
		getch();
	}
