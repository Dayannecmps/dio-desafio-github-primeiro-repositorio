#include<conio.h>
#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
	float milhas, metros, jardas, km;
	cout<<"Digite a medida em KM: ";
	cin>>km;
	
	milhas=km*0.621;
	metros=km*1000;
	jardas=km*1093.61;
	
	cout<< "\n O valor da convers�o para milhas e: "<<milhas;
	cout<< "\n O valor da convers�o para metros e: "<<metros;
	cout<< "\n O valor da convers�o para jardas e: "<<jardas;
	
	getch();
}
