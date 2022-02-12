#include<iostream>
using namespace std;

int main(){
	
	int n  = 7;
	float a[n] = {2.3 ,  5.1 ,  6.5 ,  1  , 3 ,  5 ,  6.2} , sum = 0;
    int x = 5 , j = 0;
	if(x <= n/2 ){
		
	for(int i = n-1; i >= 0 ; i--){
		if((i+1) % 2 == 0) {
		sum+= a[i]; j++;
		}
		if(j == x) break;
	}
		cout<<sum;
    }else 
    cout<<"-1";
    
	return 0;
}
