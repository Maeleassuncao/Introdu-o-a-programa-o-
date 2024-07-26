#include<iostream>
#include<clocale> 
using namespace std ;
 
 int main (){
 	int dados[]={-1,-2,3,4,-5,-6,7,8,9};
 	float soma=0;
 	for( int i=0;i<7;i++)
 	soma=soma+dados[i];
 	
 	cout<<"media = " <<soma/7.0<<endl;
 
 	
 	return 0 ;
 }
