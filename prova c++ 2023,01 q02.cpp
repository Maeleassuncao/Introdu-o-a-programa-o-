#include<iostream>
#include<clocale>
using namespace std;

int main (){
	int idade;
	float peso;
		cout<<"informe a idade da crian�a";
	cin>>idade;
		cout<<"informe o peso da crian�a";
	cin>>peso;
	if(idade<12){
	if(idade%2==1){
		idade=idade-1;
	}
	cout<<peso/2<<"gotas";
} else {
	if(peso>=60){
		cout<<"a crin�a deve tomar 40 gotas";
	
}else{
	if(peso<60);
	cout<<"a crin�a deve tomar 30 gotas";
}
	
return 0 ;	
	
	
}
}
