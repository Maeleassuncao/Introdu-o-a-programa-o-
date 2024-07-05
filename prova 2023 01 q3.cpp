#include<iostream>
#include<clocale>
using namespace std;

int main (){
	int n1,n2,soma;
	soma=0;
	cout<<"informe n1";
	cin>>n1;
		cout<<"informe n2";
	cin>>n2;
	if(n1%2==1){
		n1++;
		
	}
	
	for(int i = n1; i<= n2;i=i+2){
		soma=soma+i;
	}

	
cout<<soma;
return 0;	
}
