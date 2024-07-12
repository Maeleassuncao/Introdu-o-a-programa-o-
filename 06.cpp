#include<iostream>
#include<clocale>
using namespace std;
int main (){
	int dados[5]={5,8,7,4,9};
	int soma=0;
	for(int i=0;i<5;i++){
	
	soma=dados[i]+soma;
	}
	
	cout<<soma<<endl;
	return 0 ;
}


