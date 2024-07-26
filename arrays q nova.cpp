#include<iostream>
#include<clocale> 
using namespace std ;
 int main (){
 	
 int quantidade;
 cout<<"digite a quantidade desejada";
 cin>>quantidade;
 
int valor,posicao;
 	int dados[quantidade];
 	for( int i=0;i < quantidade;i++){
 	cout<<"digite o valor";
 	cin>>dados[i];
 	
 }
 	cout<<"qual o novo elemento ?";
 	cin>>valor;
 	cout<<"digite uma posição [1-  "<<quantidade<<"]";
 	cin>>posicao;
 	dados[posicao-1]=valor;
for( int i=0;i<quantidade;i++){
	cout<<i+1<<"  posicao =  " <<dados[i]<<endl;
}



return 0 ;
 }
