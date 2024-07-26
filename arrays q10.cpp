#include<iostream>
#include<clocale> 
using namespace std ;
 
 int main (){
 	int dados[]={-1,-2,3,4,-5,-6,7,8,9};
 	for( int i=0;i<7;i++)
 	cout<<dados[i]<<endl;
 	
 	for( int i=0;i<7;i++){
 		if(dados[i]<0);
 	dados[i]=0;
}
 	
 	
 	for( int i=0;i<7;i++)
 	cout<<dados[i]<<endl;
 	
 	
 	
 	
 	return 0 ;
 }
