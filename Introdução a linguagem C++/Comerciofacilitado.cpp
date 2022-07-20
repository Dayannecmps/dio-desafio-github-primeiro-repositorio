	#include<stdio.h>
	#include<conio.h>
	#include<iostream>
	#include<math.h>
	#include<locale.h>
	using namespace std;
	
	int main()
	{
		setlocale(LC_ALL,"Portuguese");
		
		float preco;
		
		cout<<"Digite o valor da compra: ";
		cin>>preco;
		
		if(preco<=50.00)
		{
			cout<<"\n Brinde: Adesivo";
		}
		 else if (preco<=100.00)
	    { 
	        cout<<"\n Brinde: Caneta";
		}
		else if (preco<=200.00)
		{
			cout<<"\n Brinde: Calendario";
		}
		else
		{
			cout<<"\n Brinde: Camiseta";
		}
		
		getch();
	}
