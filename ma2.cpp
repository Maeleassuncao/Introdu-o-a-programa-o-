#include<iostream>
#include<clocale>
using namespace std;
int main (){
	setlocale(LC_ALL, "PORTUGUESE");
	float valor;
	cin>>valor;
	if(valor>20){
		cout<<(float)valor/2;
	}
return 0;
	
	
	
}
