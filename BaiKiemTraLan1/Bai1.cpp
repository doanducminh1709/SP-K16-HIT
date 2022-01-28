#include<iostream>
#include<cmath>
using namespace std;

void Input(int &n , float &x){
	do{
//		cout<<"Nhap n : ";
		cin>>n;
	}while(n<=0);
//	cout<<" Nhap x : "; 
	cin>>x;
}
float ResultPow(int n , float x){
	float T = x;
	for(int i = 2 ; i <= n ; i++)
     	T*= x;//T = T*x;

	return T;
}
float ResultSxn(int n , float x){
	
	float Snx;
	if(n % 2 == 1){
		Snx = sqrt(2022);
		for(int i = 1 ; i <= n ; i++)
		Snx += ResultPow(i , (x+1)); 
	}else{
		Snx = log(x)/log(n) + sqrt(1808*exp(x));	
	}
	return Snx;
}
int main(){
	int n; float x;
	Input(n , x);
	cout<<ResultSxn(n , x);
	
}
