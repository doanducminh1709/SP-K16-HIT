#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int n = 7 , m = n-1;
	
	int a[n] = { 10 ,7 ,4, 6, 8, 10 , 11};
	int b[m];
	
	for(int i = 0 ; i < m ; ++i){
		b[i] = a[i] - a[i+1];
	} 
	
	int cnt = 1 ,  maxLength = 0;

    for(int i = 0 ; i < m ; i++){
    	if(b[i] == b[i+1]){
		cnt++;
		}
		else{
	//	maxLength = max(maxLength , cnt);
	    if(maxLength < cnt) maxLength = cnt; 
    	cnt = 1;
      }
	}
    cout<<maxLength+1;
	return 0;
} 
