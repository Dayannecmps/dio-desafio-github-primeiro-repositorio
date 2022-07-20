#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<math.h>
#include <stdlib.h>>
using namespace std;

int main()
{
	float numins, provamat, provacg, provainfo, tot1, tot2, tot3, tot4;
	system("color 3A");
	cout<<"Digite o  numero de acertos na prova de matematica:  ";
	cin>>provamat;
	cout<<"Digite o numero de acertos na prova de Conhecimentos Gerais:  ";
	cin>>provacg;
	cout<<"Digite o numero de acertos na prova de Informatica:  ";
	cin>>provainfo;
	
	tot1=provamat*1.5;
	tot2=provacg*2;
	tot3=provainfo*2.5;
	
	tot4=tot1+tot2+tot3;
	
	cout<<"\n O resultado da prova de Matematica e:  "<<tot1;
	cout<<"\n O resultado da prova de Conhecimentos Gerais e:  "<<tot2;
	cout<<"\n O resultado da prova de Informatica e:  "<<tot3;
	
	cout<<"\n O resultado obtido pelo candidato foi:  "<<tot4;
	
	getch();
	
}
