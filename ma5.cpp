#include<iostream>
#include<clocale>
using namespace std;
 int main (){
 	setlocale(LC_ALL,"PORTUGUESE");
 	int valor,resto;
cout<<"informe um valor";
cin>>valor;
 	resto=valor%2;
 	if(resto=0){
 	cout<<"o valor � par";
 	
 	}else{
 	cout<<"o valor � impar";
 }
 return 0;
}
