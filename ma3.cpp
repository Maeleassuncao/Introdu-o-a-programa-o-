#include<iostream>
#include <clocale>
using namespace std;

int main (){
		setlocale(LC_ALL, "PORTUGUESE");
int valor;
cin>> valor;
if(valor>10000){
	 cout<<"investimento alto";

 }else {
		cout<<" investimento baixo ";
	}
return 0;
}
	
	

