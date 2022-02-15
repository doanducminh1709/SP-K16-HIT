#include<iostream>
#include<cmath>
using namespace std;

void Input(int a[] , int &n){
	do{
		cin>>n;
	}while(!(n> 3 && n <= 100));
	for(int i = 0 ; i < n ; i++){
		cin>>a[i];
	}
}
void Ouput(int a[] , int n){
	for(int i = 0 ; i < n ; i++){
		cout<<a[i]<<" ";
	}
}
void SoftSatisfy(int a[] , int n){
	//dua cac so le len dau va cac so chan xuong cuoi
	int t1 = 0 , t2 = n-1;
	while(t1 < t2){
		while(t1 < t2 && a[t1] % 2 == 1) t1++;
		while(t1 < t2 && a[t2] % 2 == 0) t2--;
		swap(a[t1] , a[t2]);
	}
 //
 for(int i = 0 ; i < n - 1 ; i++){
 	for(int j = i+1 ; j < n ; j++){
 		//sap xep cac cai so le giam dan
		 if(a[i] % 2 == 1 && a[j] % 2 == 1 && a[i] < a[j]){
 			swap(a[i] , a[j]);
		 }
		//dua cac cai so 0 ra giua
		if(a[i] % 2 == 0 && a[j] % 2 == 0 &&
		 abs(a[i]) > abs(a[j])){
		 	swap(a[i] , a[j]);
		 }
	 }
  }
	 // sap xep cac so chan tang dan
 for(int i = 0 ; i < n - 1 ; i++){
 	for(int j = i+1 ; j < n ; j++){
      	if((a[i] % 2 == 0 && a[j] % 2 == 0) &&
		   (a[i] != 0 && a[j] != 0) &&(a[i] > a[j])){
		   	swap(a[i] , a[j]);
		   }
	  }
   }
 	Ouput(a , n);
 }
int main(){
	
	int a[100] , n;
	Input(a , n);
	SoftSatisfy(a , n);
	
	return 0;
}
    
    
    
    
