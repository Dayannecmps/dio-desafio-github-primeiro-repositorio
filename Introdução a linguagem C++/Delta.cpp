          #include<stdio.h>
		#include<conio.h>
		#include<iostream>
		#include<math.h>
		#include<locale.h>
		using namespace std;
		
		int main()
		{
			setlocale(LC_ALL,"Portuguese");
			
			int a,b,c, delta,raiz1,raiz2;
			
			cout<<"\n Digite o valor de A: ";
			cin>>a;
			cout<<"\n Digite o valor de B: ";
			cin>>b;
			cout<<"\n Digite o valor de C: ";
			cin>>c;
			
			delta=pow(b,2)-4*a*c;
			
			cout<<"\n O valor de Delta é: "<<delta;
			
			if (delta<0)
			{
				cout<<"\n Não existem raizes!!";
			}
			else if (delta==0)
			{
				raiz1= -b/(2*a);
				cout<<"\n Existe uma raiz!!" <<raiz1;	
			}
			else
			{
				raiz1=(-b-sqrt(delta))/(2*a);
				raiz2=(-b+sqrt(delta))/(2*a);
				
				cout<<"\n Existem Duas raizes!! "<<raiz1<<" e "<<raiz2;	
			}
			
		getch();
	}
			
