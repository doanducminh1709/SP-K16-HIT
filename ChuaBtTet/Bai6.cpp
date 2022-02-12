#include<iostream>
#include<cstring>
using namespace std;

int main(){
	
	char str[100];
	cin.getline(str,99);
	char c;
	cin>>c;
	int cnt = 0;
	for(int i = 0 ; i < strlen(str) ; ++i){
		char m = str[i];
     //if(m == c) cout<<(i+1)<<" ";
     if((int)c == (int)m) cout<<(i+1)<<" ";
		else cnt++;
	}
	if(cnt == strlen(str)) cout<<"No";
	
} 
