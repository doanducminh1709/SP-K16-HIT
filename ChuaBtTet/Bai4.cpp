#include<iostream>
#include<cmath>
using namespace std;

void Input(float &x , int &n){
	do{
		cin>>n;
	}while(n <= 0);
	cin>>x;
}
double ResultPow(int n , float x){
	float P = x;
	for(int i = 2 ; i <= n ; i++) 
	  P*= x;
	return P;
}
double ResultSnx(int n , float x){
	double S = 0;
	int Gt = 1;
	for(int i = 1 ; i <= n ; ++i){
		Gt*=i;
		S += (ResultPow(i , -1)*(ResultPow(i , x)/(Gt)));
	}
	return S;
}
int main(){
	int n ; float x;
	Input(x,n);
	cout<<ResultSnx(n , x);
	return 0;
}
