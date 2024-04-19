#include<iostream>
#include<clocale>
using namespace std;
int main(){
	setlocale(LC_ALL, "PORTUGUESE");

	float valor;
	cout<<"informe um valor";
	cin>>valor;
	if(valor>0){
		cout<<"postivo";
		
	}else{//<=
		if(valor<0){
			cout<<"negativo";
		}else{// =
		}
	}

	
	
}
