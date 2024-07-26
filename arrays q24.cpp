#include<iostream>
#include<clocale> 
using namespace std ;
 
 int main (){
 	int dados[5];
 	int posicao,valor;
 	cout<<"qual o novo elemento ?";
 	cin>>valor;
 	cout<<"digite uma posição [1-5]";
 	cin>>posicao;
 	dados[posicao-1]=valor;
for( int i=0;i<5;i++){
	cout<<i+1<<"  posicao =  " <<dados[i]<<endl;
}



return 0 ;
 }
