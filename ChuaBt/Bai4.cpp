#include<iostream>
#include<cmath>
using namespace std;

//ham tinh mu
float ResultP(float x , int n){
	float P = x;
	for(int i = 2 ; i<= n ; i++){
		P*=x;//P = P*x;
	}
	return P;
}
// ham tinh S(x , n)
float ResultSxn(float x , int n){
  	float S = 0;
  	int Gt = 1;
    for(int i = 1 ; i <= n ; i++){
    	Gt*=i;
    	S += (ResultP(-1 , i)*(ResultP(x , i)/Gt));
	}	
	return S;
}
int main(){
   
   int n;
   float x;
   do{
   	cin>>n;
   }while(n <= 0);
   cin>>x;

   cout<<"S(x , n) = "<<ResultSxn(x , n);
	return 0;
}
