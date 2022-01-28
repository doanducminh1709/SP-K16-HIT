#include<iostream>
using namespace std;

void Input(int a[] , int &n){
	cin>>n;
	for(int i = 0 ; i < n ; i++)
	cin>>a[i];
}
void Ouput(int a[] , int n){
	for(int i = 0 ; i < n ; i++)
	   cout<<a[i]<<" ";
}
void Swap(int &a , int &b){
	int tmp = a;
	a = b; 
	b = tmp;
}
//Cach 1
void Sort1(int a[] , int n){
    //buoc 1 : sap xep giam dan 
	for(int i = 0 ; i < n - 1 ; i++){
    	for(int j = i+1 ; j < n ; j++){
    		if(a[i] > a[j]) Swap(a[i] , a[j]);
		}
	}	
	//sap xep so am dau mang sap xep tang dan va so duong cuoi mang sap xep giam dan
   for(int i = 0 ; i < n - 1 ; i++){
    	for(int j = i+1 ; j < n ; j++){
    		if(a[i] < a[j] && a[j] < 0){ Swap(a[i] , a[j]);	}
			if(a[i] > a[j] && a[j] >= 0){ Swap(a[i] , a[j]); }
    	}
    }
    Ouput(a , n);
}
//Cach 2
void Sort2(int a[] , int n){
	//Dua cac so am ve dau mang so duong cuoi mang
	int t1 = 0 , t2 = n-1;
	while( t1 < t2){
		while(t1 < t2 && a[t1] < 0) t1++;
		while(t1 < t2 && a[t2] >= 0) t2--;
		swap(a[t1] , a[t2]);
	}
	//sap xep so am dau mang sap xep tang dan va so duong cuoi mang sap xep giam dan
	for(int i = 0 ; i < n - 1 ; i++){
    	for(int j = i+1 ; j < n ; j++){
    		if(a[i] < a[j] && a[j] < 0){ Swap(a[i] , a[j]);	}
			if(a[i] > a[j] && a[j] >= 0){ Swap(a[i] , a[j]); }
    	}
    }
      Ouput(a , n);
}
//Cach 3 
void Sort3(int a[] , int n , bool check){
	//buoc 1 : sap xep giam dan 
	for(int i = 0 ; i < n - 1 ; i++){
    	for(int j = i+1 ; j < n ; j++){
    		if(a[i] > a[j] == check) Swap(a[i] , a[j]);
		}
	}	
}
int main(){
	
	int n , cnt = 0 , i = 0;
	int a[n];
	Input(a , n);
	cout<<endl;
	
	Sort1(a , n);
	cout<<endl;
	
	Sort2(a , n);
	cout<<endl;
	
	Sort3(a , n , true);
	while(a[i++] < 0){
		 cnt++; 
	}	
	Sort3(a , cnt , false);
    Ouput(a , n);
	
}
