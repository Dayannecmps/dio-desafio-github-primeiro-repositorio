	#include<stdio.h>
	#include<conio.h>
	#include<iostream>
	#include<math.h>
	#include<locale.h>
	using namespace std;
	
	int main()
	{
		setlocale(LC_ALL,"Portuguese");
		
		float valorvenda, valorcomi;
		
		cout<< "Digite o valor da venda do funcionario: ";
		cin>>valorvenda;
		
		if (valorvenda<=12000.00)
		{
			valorcomi=valorvenda*0.03;
			
			cout<<"O Valor da comiss�o do funcionario � R$:" <<valorcomi;
		}
		 else if (valorvenda<=35000.00)
        {
        	valorcomi=valorvenda*0.04;
        	
        	cout<<"O Valor da comiss�o do funcionario � R$:" <<valorcomi;
		}
		else 
		{
			valorcomi=valorvenda*0.05;
			cout<<"O Valor da comiss�o do funcionario � R$:" <<valorcomi;
		}
		
	getch();
}
