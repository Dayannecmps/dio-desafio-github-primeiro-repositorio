#include <iostream>
#include <stdio.h>
#include <conio.h>
#include<cctype>
#include<locale.h>
#include <math.h>

using namespace std;
int main()
{
   setlocale(LC_ALL,"Portuguese");
   
   int n1,n2,n3,tot;
   
   cout<<"\nDigite o valor da primeira prova: ";
   cin>>n1;
   cout<<"\nDigite o valor da segunda prova: ";
   cin>>n2;
   cout<<"\nDigite o valor da terceira prova: ";
   cin>>n3;
   
   tot=n1+n2+n3;
   
   switch(tot)
   {
   	case 0 ... 3:
   	cout<<"\n";
   	cout<<"\n O desempenho do aluno foi: Muito Baixo!! \n";
   	break;
   	
   	case 4 ... 5:
     cout<<"\n";
   	cout<<"\n O desempenho do aluno foi: Baixo!!";
   	break;
   	
   	case 6 ... 7:
   	cout<<"\n";
   	cout<<"\n O desempenho do aluno foi: Médio!!";
   	break;
   	
   	case 8 ... 10:
     cout<<"\n";
   	cout<<"\n O desempenho do aluno foi: Alto!!";
   	break;
   }
   getch();
}
