        #include<stdio.h>
		#include<conio.h>
		#include<iostream>
		#include<locale.h>
		#include<cctype>
		#include<stdlib.h>
		using namespace std;
			
		int main()
		{
			setlocale(LC_ALL,"Portuguese");
			float peso, pesonovo;
			int cod;
			
			cout<<"Digite o seu peso: ";
			cin>>peso;
	
            cout<<"\n 1- Merc�rio \n 2- V�nus \n 3- Marte \n 4- J�piter \n 5- Saturno \n 6- Urano";
            cout<<"\n";
            
			cout<<"\nEscolha uma op��o: 1 a 6: ";
			cin>>cod;
			
			switch(cod)
			{
				case 1:
				pesonovo=(peso/10)*0.37;
				cout<<"O seu peso em Mercurio sera: "<<pesonovo;
				break;
				
				case 2:
				pesonovo=(peso/10)*0.88;
				cout<<"O seu peso em V�nus sera: "<<pesonovo;
				break;
				
				case 3:
				pesonovo=(peso/10)*0.38;
				cout<<"O seu peso em Marte sera: "<<pesonovo;
				break;
				
				case 4:
				pesonovo=(peso/10)*2.64;
				cout<<"O seu peso em J�piter sera: "<<pesonovo;
				break;
				
				case 5:
				pesonovo=(peso/10)*1.15;
				cout<<"O seu peso em Saturno sera: "<<pesonovo;
				break;
				
				case 6:
				pesonovo=(peso/10)*1.17;
				cout<<"O seu peso em Mercurio sera: "<<pesonovo;
				break;
				
				default:
		      	cout<<"A sua op��o est� inv�lida!!";
			     break;
			}
			getch();
		}
