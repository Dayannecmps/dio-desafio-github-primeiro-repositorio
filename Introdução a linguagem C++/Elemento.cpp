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
			
			cout<<"Digite o peso do elemendo MANH�: ";
			cin>>peso1;
			cout<<"Digite o peso do elemendo TARDE: ";
			cin>>peso2;
			cout<<"Digite o peso do elemendo NOITE: ";
			cin>>peso3;
			
			pesofinal=(peso1+peso2+peso3)/3;
			
			if (pesofinal<=100)
			{ 
			  cout<<"Classifica��o: Muito Inst�vel!!";
			}
			else if(pesofinal<=250)
			{
					  cout<<"Classifica��o: Pouco Inst�vel!!";
			}		
			else
			{
				 cout<<"Classifica��o: Est�vel!!";
			}
			
			getch();
          }
			
			
