#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

void Input(int &n , float &x){
	cin>>x;
	do{
	 cin>>n;	
	}while( n <= 0);
}
float ResultPow(int n , float x){
	float T = x;
	for(int i = 2 ; i <= n ; i++)
     	T*= x;//T = T*x;

	return T;
}
float ResultL(int n , float x){
	float L;
	int Mau , i;
	if(n%2 == 1){
		L = 2022;
		 Mau = 0;
		for(i = 1 ; i <= n ; i++){
		 Mau += i;
		 L+= ((float)(ResultPow(i , x) + 2*i)/Mau);
	   }
	}else{
		L = 2021;
		Mau = 1;
		for(i = 1 ; i <= n ; i++){
		  Mau*=i;
		  L+= ((float)(ResultPow(i , x) + 2*i)/Mau);
    	}
    }
	return L;
}
int main(){
	
	int n ; float x;
	Input(n , x);
	cout<<"L(x,n) = "<<fixed<<setprecision(4)<<ResultL(n,x);
	return 0;
}
