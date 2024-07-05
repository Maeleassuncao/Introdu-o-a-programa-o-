#include<iostream>
#include<clocale>
using namespace std;

int main (){
	float num,soma;
 soma=0;
 cout<<"informe um numero";
 cin>>num;
 while(num!=0){
 	soma=soma+num;
 	cout<<"informe um numero";
 cin>>num;
 }
 
 cout<<"a soma doa numros = "<<soma<<endl;
 
 
 
 return 0;
}
