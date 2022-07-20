#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	float n1, n2,dife,divi,soma,quad1,quad2;
	
	cout<<"\n Digite um numero real: "; 
	 cin>>n1;
	 cout<<"\n Digite outro numero real: ";
	 cin>>n2;
	 
	 if (n1>n2)
	 {
	   dife=n1-n2;
	   divi=n1/n2;
	   
	   cout<<"\n A diferenca entre os dois numeros e: "<<dife;
	   cout<<"\n A divisao dos dois numeros e de: "<<divi;
	 }
	   else
	   
	   {
	   	soma=n1+n2;
	   	quad1=pow(n1,2);
	   	quad2=pow(n2,2);
	   	
	   	cout<<"\n O quadrado do primeiro numero e: " <<quad1;
	   	cout<<"\n O quadrado do segundo numero e: " <<quad2;
	   }
	  
	  getch(); 
	   
}
