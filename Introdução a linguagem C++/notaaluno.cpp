#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int nota;
	
	cout<<"Digite a nota do aluno: ";
	cin>>nota;
	
	if(nota>=60) 
	{ 
	  cout<<"Parabens, voce foi aprovado!! :)";
	}
	else if  ((nota>=45)&&(nota<=59))
	{
	   cout<<"Eita, voce ficou de recuperacao!! :/";
	} 
	else 
	{
		cout<<"Lamento, voce foi reprovado!! :( ";
	}
	getch();
}
