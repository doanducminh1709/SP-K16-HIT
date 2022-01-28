#include<iostream>
using namespace std;

void Input(int a[] , int&n){
	do{
		cin>>n;
	}while(n<=0);
	for(int i = 0 ; i < n ; i++)
	cin>>a[i];
}
void Ouput(int a[] , int n){
	for(int i = 0 ; i < n ; i++)
	cout<<a[i]<<" ";
}
bool CheckSnt(int n){
	if(n < 2)return false;
	for(int i = 2 ; i*i <= n ; i++){
		if(n%i==0)return false;
	}
return true;
}
void AddNumber(int a[] , int&n , int pos , int value){
	for(int i = n ; i> pos ; i--){
		a[i] = a[i-1];
	}
	n++; a[pos] = value;
}
void DeleteNumber(int a[] , int &n , int pos){
	for(int i = pos ; i < n - 1 ; i++){
		a[i] = a[i+1];
	}
	n--;
}
//ham chen tat ca cac so sau so nt nho hon 10
void AddNumberAfterPrime(int a[] , int &n , int &k){
	cin>>k;
	for(int i = 0 ; i < n ; i++){
		if(a[i] == 2 || a[i] == 3 || a[i] == 5 || a[i] == 7){
//		if(a[i] < 10 && CheckSnt(a[i])){
			AddNumber(a , n , i+1 , k);
			i++;
		}
	}
	Ouput(a , n);
	cout<<endl;
}
//Ham xoa cac so chia het cho 3 nhung khong chia het cho 5
void DeleteAllNumber(int a[] , int &n){
	for(int i = 0 ; i < n ; i++){
		if(a[i] % 3== 0 && a[i] % 5 != 0){
			DeleteNumber(a , n , i);
			i--;
		}
	}
	Ouput(a , n);
	cout<<endl;
}
//xoa cac so trung nhau 
void DeleteNumberDulicate(int a[] , int &n){
	for(int i = 0 ; i < n - 1 ; i++){
		for(int j = i+1 ; j < n ; j++){
			if(a[i] == a[j]){
			//Cach 1 
				a[j] = a[j+1];
				n--;
				i--;
				/*
			//Cach 2 
			DeleteNumber(a , n , i);
			i--;
				*/
			}
		}
	}
	Ouput(a , n);
	cout<<endl;
}
int main(){
	int a[100] , n , k;
	Input(a , n);
	//cau a
	AddNumberAfterPrime(a , n , k);
	//cau b
	DeleteAllNumber(a , n );
	//cau c
	DeleteNumberDulicate(a,n);
	return 0;
}
