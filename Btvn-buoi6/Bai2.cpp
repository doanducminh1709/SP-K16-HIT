#include<iostream>
using namespace std;

int CheckSnt1(int n){
	for(int i = 2; i * i<= n ; i++){
		if(n % i == 0) return -1;
	}
	return n>1;
}
bool CheckSnt2(int n){
	if(n<2)return false;
	for(int i = 2 ; i*i<=n ; i++){
		if(n % i == 0) return false;
	}
	return true;
}
void Ktra(int &n){
	cin>>n;
	int cnt=0 , k = n;
	//count
	while(n> 0){
		 int m = n %10; n/=10;
		if(CheckSnt1(m)==1)cnt++;
	}
	cout<<cnt<<endl;
	//show
	while(k > 0){
		int t = k % 10; k/=10;
		if(CheckSnt2(t)) cout<<t<<" ";
	}
}
int main(){
	int n;
	Ktra(n);
	return 0;
}
