#include<iostream>
using namespace std;

int main(){
//TEST 1
  int n = 4, m = 5;
  float a[n] = {1.2 ,  3.4 , 7.8 , 9.8};
  float b[m] = {0.1 , 2.3 , 3.5 , 7.6 , 10.0};
//TEST 2
//   int n = 2 , m = 3;
//   float a[n] = {1 , 3} , 
//   b[m] = { 2 , 4 , 7};
// 0.1  1.2  2.3  3.4
//  3.5  7.6  7.8  9.8  10.0
   
   int k = m+n;
   float c[k];
   //sap xep mang a
   for(int i = 0 ; i < n ; i++){
   	for(int j = 0 ; j < m ; j++){
   		if(a[i] > b[j]) swap(a[i] , b[j]);
	   }
   }
   //sap xep mang b
   for(int i = 0 ; i < n - 1 ; i++){
   	for(int j = i+1 ; j< n ; j++){
   		if(b[i] > b[j]) swap(b[i] , b[j]);
	   }
   }
   //
   int j = 0;
   for(int i = 0 ; i < k ; i++){
   	if(i < n){
   		c[i] = a[i];
	}else{
	 c[i] = b[j++];	
	}
	cout<<c[i]<<" ";
   }

return 0;	
}
