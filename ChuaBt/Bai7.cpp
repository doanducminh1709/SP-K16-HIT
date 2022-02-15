#include<iostream>
#include<cstring>
using namespace std;

int main(){
	
	char str[100];
	cin.getline(str , 100);
	
	int i = 0 , cnt = 0;
	while(str[i++] != ' '){
		cnt++;
	}
	// vi tri cua tu cuoi cung minh se in ra dau tien
	int j = strlen(str) - 1;
	while(str[j] != ' '){
		j--;
	}
     for(int i = j+1 ; i < strlen(str) ; i++){
     	cout<<str[i];
	 }
	// vi tri cua tu tiep theo
	for(int i = cnt ; i <= j ; i++){
		cout<<str[i];
	}
	//in ra cai tu cuoi cung 
	for(int i = 0 ; i < cnt ; i++){
		cout<<str[i];
	}
	return 0;
}
