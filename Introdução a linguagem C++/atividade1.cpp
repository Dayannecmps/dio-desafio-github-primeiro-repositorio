#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <math.h>

using namespace std;
int main()
{
   int dia;
   
   cout << "Digite qual o dia da semana:";
   cin >> dia;  
   
   switch(dia)
   {
   case 1: 
   cout<<"Hoje � Domingo!";
   break;
   
    case 2:
      cout<<"Hoje � Segunda-Feira!";
	break;
   
   case 3:
   cout<<"Hoje � Ter�a-Feira!";
   break; 
   
   case 4:
   cout<<"Hoje � Quarta-Feira!";
   break; 
   
   case 5:
   cout<<"Hoje � Sexta-Feira!";
   break; 
   
   case 6:
   cout<<"Hoje � Sexta-Feira!";
   break; 
   
   case 7:
   cout<<"Hoje � Sabado-Feira!";
   break; 
   
   
   
   default: 
   cout<<"Voce digitou uma op��o errada!! ";
   break; 
   }
   getch();
}

