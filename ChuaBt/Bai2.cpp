#include<iostream>
#include<cmath>
using namespace std;

void Input(int &n , int &m){
	cin>>n>>m;
	if(n < m){
		int temp = n;
		n = m;
		m = temp;
	}
}
float ResultFx(float x , int n){
	float F = 2020*abs(n*x);
	for(int i = 1 ; i <= n ; i++){
		F += (x / (2*n-i));
	}
	return F;
}
int main(){
	int n , m;
	float x;
	Input(n , m);
	cin>>x;
	cout<<" Result Fx = "<<(ResultFx(x , n) - ResultFx(x , m));
	
	return 0;
}
