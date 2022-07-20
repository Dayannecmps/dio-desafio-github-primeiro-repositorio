#include<conio.h>
#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
	float numjogos, numvi, numemp, numder, golsm, golssf, mediagm, mediags, pontuacao;
	
	cout<<"Qual o numero de vitorias?  ";
	cin>>numvi;
	cout<<"Qual o numero de empates?  ";
	cin>>numemp;
	cout<<"Qual o numero de derrotas?  ";
	cin>>numder;
	
	numjogos=numvi+numder+numemp;
	cout<<"\n A equipe jogou" <<numjogos<< " jogos.";
	
	numvi=numvi+3;
	numemp=numemp+1;
	
	pontuacao=numvi+numemp;
	
	cout<<"\n Quantos gols foram marcados? ";
	cin>>golsm;
	cout<<"\n Quantos gols foram sofridos? ";
	cin>>golssf;
	
	mediagm=golsm/numjogos;
	mediags=golssf/numjogos;
	 
	 cout<<"\n A media de gols marcados por jogo foi de: "<<mediagm;
	 cout<<"\n A media de gols sofridos por jogo foi de: "<<mediags;
	 
	 getch();
	
}
	

