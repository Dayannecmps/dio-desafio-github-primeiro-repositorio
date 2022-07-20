#include<stdio.h>
		#include<conio.h>
		#include<iostream>
		#include<math.h>
		#include<locale.h>
		using namespace std;
		
		int main()
		{
			setlocale(LC_ALL,"Portuguese");
			
			float peso1, peso2,peso3,pesofinal;
			
			cout<<"Digite o peso do elemendo MANHÃ: ";
			cin>>peso1;
			cout<<"Digite o peso do elemendo TARDE: ";
			cin>>peso2;
			cout<<"Digite o peso do elemendo NOITE: ";
			cin>>peso3;
			
			pesofinal=(peso1+peso2+peso3)/3;
			
			if (pesofinal<=100)
			{ 
			  cout<<"Classificação: Muito Instável!!";
			}
			else if(pesofinal<=250)
			{
					  cout<<"Classificação: Pouco Instável!!";
			}		
			else
			{
				 cout<<"Classificação: Estável!!";
			}
			
			getch();
          }
			
			
