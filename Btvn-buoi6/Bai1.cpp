#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

void Input(int &n , float &x){
	cin>>n>>x;
}
float PowXn(int n , float x){
   float T = x;	
	for(int i = 2 ; i <= n ; i++)
		T*=x;
	return T;
}
float ResultL(int n , float x){
	float L;
	if(n % 2 == 0){
    	L = abs(log(x) / log(2) + exp(n) + 2021);
	}else{
	  L = 2021;
	 for(int i = 1 ; i <= n ; i++)
	    L+= ((float)(2*i-1)/PowXn(i , x));
	}
	return L;
}
int main(){
	int n; 
	float x;
	Input(n , x);
	cout<<fixed<<setprecision(4)<<ResultL(n , x);
	
	return 0;
} 
