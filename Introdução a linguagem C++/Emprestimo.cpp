	        #include<stdio.h>
			#include<conio.h>
			#include<iostream>
			#include<math.h>
			#include<locale.h>
			using namespace std;
			
			int main()
			{    
				setlocale(LC_ALL,"Portuguese");
				
			   float valor, juros, parcela, total;	
			   int plano;
			   
			   cout<<"\n Digite o valor do emprestimo: ";
			   cin>>valor;
			   
			   cout<<"\n Tabela de planos para emprestimo:  ";
			   cout<<"\n 1- 12 vezes e 25% de Juros ";
			   cout<<"\n 2- 18 vezes e 40% de Juros ";
			   cout<<"\n 3- 24 vezes e 50% de Juros ";
			   cout<<"\n 4- 36 vezes e 75% de Juros ";
			   cout<<"\n";
			   cout<<"\n Digite sua opção: 1-4  ";
			   cin>>plano;
			   
			   switch(plano)
			   {
			   	case 1:
			   	juros=valor*0.25;
			   	total=juros+valor;
			   	parcela=total/12;
			   	
			   	cout<<"\n O cliente irá pagar no final R$: "<<total;
			   	cout<<"\n O valor de cada parcela será de R$: "<<parcela;
			    break;
			     
			   	case 2:
			   juros=valor*0.40;
			   	total=juros+valor;
			   	parcela=total/18;
			   	cout<<"\n O cliente ira pagar no final R$: "<<total;
			   	cout<<"\n O valor de cada parcela sera de R$: "<<parcela;
		        break;
		          
			   	case 3:
			   	juros=valor*0.50;
			   	total=juros+valor;
			   	parcela=total/24;
			   	
			   	cout<<"\n O cliente ira pagar no final R$: "<<total;
			   	cout<<"\n O valor de cada parcela sera de R$: "<<parcela;
			    break;
			     
			   	case 4:
			   	juros=valor*0.75;
			   	total=juros+valor;
			   	parcela=total/36;
			   	
			   	cout<<"\n O cliente ira pagar no final R$: "<<total;
			   	cout<<"\n O valor de cada parcela sera de R$: "<<parcela;
			    break;
			     
		     	default:
		     		cout<<"\n Voce digitou uma opcao invalida!!";
			    break;
			     
			   }
			   	
			    getch();
	}
