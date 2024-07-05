#include<iostream>
#include<clocale>
using namespace std;

int main(){
	setlocale(LC_ALL, "PORTUGUESE");
	int nome,peso,agua,prot,carbo;
	cout<<"informe o peso em kg "; 
	cin>>peso;
	cout<<peso*0.05<<"litros"<<endl;
	cout<<carbo*0.06<<"kg"<<endl;
	cout<<prot*0.25<<"kg"<<endl;
	return 0;
	
	
}

