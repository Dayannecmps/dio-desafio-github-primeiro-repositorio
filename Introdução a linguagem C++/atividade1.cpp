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
   cout<<"Hoje é Domingo!";
   break;
   
    case 2:
      cout<<"Hoje é Segunda-Feira!";
	break;
   
   case 3:
   cout<<"Hoje é Terça-Feira!";
   break; 
   
   case 4:
   cout<<"Hoje é Quarta-Feira!";
   break; 
   
   case 5:
   cout<<"Hoje é Sexta-Feira!";
   break; 
   
   case 6:
   cout<<"Hoje é Sexta-Feira!";
   break; 
   
   case 7:
   cout<<"Hoje é Sabado-Feira!";
   break; 
   
   
   
   default: 
   cout<<"Voce digitou uma opção errada!! ";
   break; 
   }
   getch();
}

