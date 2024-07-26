#include<iostream>
#include<clocale> 
using namespace std ;
 
 int main (){
 	int a[]={1,2,3,4,5};
 	int b[]={7,8,9,10,11};
 	int c[10];
 	for(int i=0 ; i<5 ; i++){
 		c[i]=a[i];
	 }
 	for(int i=5;i<10;i++){
 		c[i]=b[i-5];
	 }
	 for( int i=0;i<10;i++)
 	cout<<c[i]<<endl;
 	return 0 ;
 }
