#include<iostream>
using namespace std;

int main(){
	int n = 7;
	int a[n] = {10 , 7 ,4 ,6 ,8, 10, 11};
	int m = n-1;
	
	for(int i = 0 ; i < n ; i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
	//mang hieu 
	int b[m];
	for(int i = 0 ; i < m ; i++){
		b[i] = a[i] - a[i+1];
	} 
	for(int i = 0 ; i < m ; i++){
		cout<<b[i] <<" ";
	}
	cout<<endl;
	
	int cnt = 1 , maxLength = 1;
	for(int i = 0 ; i <= m ; i++){
		if(b[i] == b[i+1]){
			cnt++;
		}else {
			if(cnt > maxLength) maxLength = cnt;
			//cnt = 1;
		}
	}
	cout<<(maxLength+1);
	
	return 0;
}
