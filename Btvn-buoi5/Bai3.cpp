#include<iostream>
using namespace std;

void Input(int a[] , int&n){
	do{
		cout<<" Nhap n : ";cin>>n;
	}while(!(n>2 && n <= 50));
	for(int i = 0 ; i < n ; i++){
	//cout<<"a["<<i<<"] = ";
	 cin>>a[i];
    }
}
int CheckSnt(int n){
	if(n<2){
		return 0;
	}
	for(int i = 2 ; i*i <= n ; i++){
		if(n%i == 0) return 0;
	}
	return 1;
}
int CheckLuckyNb(int n){
	int sum = 0;
	while(n > 0){
		int m = n%10;
		sum+=m; n/=10;
	}
	if(CheckSnt(sum)) return 1;
	else return 0;
}
void UpdateLuckyNb(int a[] , int n){
	for(int i = 0 ; i < n ; i++){
		if(CheckLuckyNb(a[i])) 
		a[i] = -1;
	}
	for(int i = 0 ; i < n ; i++){
		cout<<a[i]<<" ";
	}
}
int main(){
	
	int n , a[100];
	Input(a , n);
	UpdateLuckyNb(a ,n);
	
return 0;	
	}
