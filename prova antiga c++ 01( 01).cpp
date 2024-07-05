#include<iostream>
#include<clocale>
using namespace std ;

int main(){
	float veloA,veloB,dist,tempo;
	cout<<"informe a velocidade de A ";
	cin>>veloA;
	cout<<"informe a velocidade de B ";
	cin>>veloB;
	cout<<"informe a distancia ";
	cin>>dist;
	cout<<dist/(veloA-veloB);
	return 0;
	
	
}
