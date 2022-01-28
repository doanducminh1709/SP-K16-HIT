#include<iostream>
using namespace std;

void Input(int a[] , int&n){
	do{
		cout<<"Nhap n : ";
		cin>>n;
	}while(!(n>0 && n < 100));
	for(int i = 0 ; i < n ; i++){
	//cout<<"a["<<i<<"] = ";
	 cin>>a[i];
    }
}
void Ouput(int a[] , int n){
	for(int i = 0 ; i < n ; i++)
	cout<<a[i]<<" ";
}
//Chung ta co the dung ham bool de kiem tra tinh dung sai
//hoac dung ham tra ve(int) kiem tra dung tra ve 1 sai tra ve 0 
bool CheckUnluckyNb(int n){
	while(n > 0){
		int m = n%10;
		n/=10;
		if(m != 4 && m != 7)
			return false; 
	}
	 return true;
}
void DeleteNumber(int a[] , int &n , int pos){
	for(int i = pos ; i < n - 1 ; i++)
	{
		a[i] = a[i+1];
	}
	n--;
}
void DeleteUnluckyNb(int a[] , int &n ){
//Cach 1 
//	for(int i = 0 ; i < n ; i++)
//	{
//		if(CheckUnluckyNb(a[i])){
//			DeleteNumber(a , n , i);
//			i--;
//		}
//	}
//Cach2 
//for(int i = 0 ; i < n ; i++){
//	while(CheckUnluckyNb(a[i]) && i < n){
//	DeleteNumber(a , n , i);
//	}
// } 
 //Cach 3 
  for(int i = 0 ; i < n ; i++){
  	if(!CheckUnluckyNb(a[i])){
  		cout<<a[i]<<" ";
  } 
 }
}
void SoftNumber(int a[] , int n){
	for(int i = 0 ; i < n - 1 ; i++)
	{
		for(int j = i+1 ; j < n ; j++){
			if(a[i] > a[j])
			//C1: su dung ham hoan doi vi tri trong C++ , Nguyen li hoat dong (truyen tham chieu)
				swap(a[i] , a[j]);
			/*
			C2 : int temp = a[i]; a[i] = a[j] ; a[j] = temp;
			*/
		}
	}
}

int main(){

   int a[100] , n;	
   Input(a , n);
    SoftNumber(a , n);
   DeleteUnluckyNb(a , n);
 return 0;
}
