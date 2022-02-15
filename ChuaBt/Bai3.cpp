#include<iostream>
#include<cmath>
using namespace std;

void Input(int &n , int &m){
	do{
		cin>>n>>m;
	}while(n < 4 || n > m);
}
void ResultSum(int n , int m){
	int sum1 = 0 , sum2 = 0;
	for(int i = 1 ; i <= m ; i++){
		if(i <= n && i % 3 == 0){
			sum1+=i;
		}
		if(i >= n && i <= m && i % 3 == 0){
			sum2+=i;
		}
	}
	cout<<sum1<<endl<<sum2;
}
float ResultPn(int n){
//Cach 1
//	float P , R = 1;
//	for(int i = 2 ; i<= n ; i++){
//		P = sqrt(i+R);
//		R = P;
//	}
//Cach 2
  float P = 1;
  for(int i = 2 ; i <= n ; i++){
  	 P = sqrt(P+i);
  } 
 return P;
	// sqrt(3 + sqrt(2 +1))
	
}
int main(){
	
	int n , m;
	Input(n , m);
	ResultSum(n , m);
	cout<<endl<<ResultPn(n);
	return 0;
}
