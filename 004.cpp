#include<iostream>
#include<clocale>
using namespace std;
int main (){
	int dados[5]={1,2,3,4,5};
	int maior=-100000000,menor=100000000;
	for(int i=0;i<5;i++){
	if(dados[i]<menor){
        menor=dados[i];
	}
	
	
	if(dados[i]>maior){
     maior=dados[i];
     
		
		
	}
	cout<<" o maior ="<<maior<<endl;
	cout<<"o menor = "<<menor<<endl;
}
	return 0;
	}

