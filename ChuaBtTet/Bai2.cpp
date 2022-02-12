#include<iostream>
#include<cmath>
using namespace std;


void Input(int &n , int &m){
	cin>>n>>m;
	if(n < m ){
		int temp = n; n = m ; m = temp;
	}
}
float ResultFxn(float x , int n){
	  float Fx = 2020*fabs(n*x);
	for(int i = 1 ; i <= n ; i++){
	    Fx += x/(2*n-i);
    }
	return Fx;  
}
int main(){
   int m , n ;
   float x; 
   Input(n , m);
   cin>>x;
   cout<<(ResultFxn( x , n) - ResultFxn(x , m));	
	return 0;
}
