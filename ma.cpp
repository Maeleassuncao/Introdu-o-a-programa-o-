#include<iostream>
#include<clocale>
using namespace std;
int main (){
	int ano,resto;
	setlocale(LC_ALL, "PORTUGUESE");
	cout<<"informe o ano";
	cin>>ano;
	resto=ano%4;
	if(resto==0){
		  cout<<"ano bissexto";
	  
	} else {
		cout<<" não é ano bissexto ";
	}
return 0;
}
