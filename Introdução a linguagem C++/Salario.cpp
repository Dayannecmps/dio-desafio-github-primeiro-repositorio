		#include<stdio.h>
		#include<conio.h>
		#include<iostream>
		#include<math.h>
		#include<locale.h>
		using namespace std;
		
		int main()
		{
			setlocale(LC_ALL,"Portuguese");
			
			float salario, aumento, nvsalario;
			
			cout<<"Digite o sal�rio do funcionario: ";
			cin>>salario;
			
			if (salario<=3000.00)
			{
				aumento=salario*0.04;
				nvsalario=salario+aumento;
				
				cout<<"O novo sal�rio do funcionario ser� de R$: "<<nvsalario;
			}
			else
			{
				aumento=salario*0.03;
				nvsalario=salario+aumento;
				
					cout<<"O novo sal�rio do funcionario ser� de R$: "<<nvsalario;
				
			}
			
			getch();
		}
