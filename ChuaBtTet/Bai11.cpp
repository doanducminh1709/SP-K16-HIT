#include<iostream>
using namespace std;

int main(){

//Test 1	
	int m = 4 , n = 5 , k = m+n , j = 0;
	float a[m] = {1.2 , 3.4  , 7.8 , 9.8};
	float b[n] ={0.1 , 2.3 , 3.5 , 7.6 , 10.0};
	float c[k];
//Test2
//	int m = 2 , n = 3 , k = m+n , j = 0;
//    float a[m] = {1 , 3}  , b[n] = {2 , 4 , 7} , c[k]; 
	
	//sort a
	for(int i = 0 ; i < m ; i++){
		for(int j = 0 ; j < n ; j++){
			if(a[i] > b[j]) swap(a[i] , b[j]);
		}
	}
	//sort b
	for(int i = 0 ; i < n - 1 ; i++){
		for(int j = i+1 ; j < n ; j++){
			if(b[i] > b[j]) swap(b[i] , b[j]);
		}
	}
    //add item to c array
	for(int i = 0 ; i < k ; i++){
		if(i < m) c[i] = a[i];
		else c[i] = b[j++];
		cout<<c[i]<<" ";
	}	
	return 0;
}
