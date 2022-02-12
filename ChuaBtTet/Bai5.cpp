#include<iostream>
#include<cmath>
using namespace std;

void Input(int a[], int &n ){
	do{
		cin>>n;
	}while(!(3<= n && n <= 100));
  for(int i = 0 ; i < n ; ++i)
    cin>>a[i];
}
void Ouput(int a[] , int n){
	for(int i = 0 ; i < n ; ++i)
	  cout<<a[i]<<" ";
}

void Sort(int a[] , int n){
	int t1 = 0 , t2 = n-1;
	//dua cac so le ra dau so chan xuong cuoi 
	while(t1<t2){
		while(t1<t2&&a[t1] % 2 == 1) t1++;
		while(t1<t2&&a[t2] % 2 == 0) t2--;
		swap(a[t1] , a[t2]);
	}
	//sap xep so le giam dan , dua so 0 ra giua
	for(int i = 0 ; i < n-1 ;i++){
		for(int j = i+1 ; j < n ; j++){
			if(a[i] % 2 == 1 && a[j] %2 == 1 && a[i] < a[j]){
				swap(a[i] , a[j]);
			}
			if((a[i] && a[j]) % 2 == 0 
			&& abs(a[i]) > abs(a[j])){
				swap(a[i] , a[j]);	
			}
		}
	}
	//sap xep so chan tang dan 
		for(int i = 0 ; i < n-1 ;i++){
		for(int j = i+1 ; j < n ; j++){
			if(a[i] % 2 ==  0 && a[j] % 2 == 0 
			 && a[i] > a[j] && (a[i] && a[j])!=0){
				swap(a[i] , a[j]);
			}
		}
	}
	Ouput(a , n);
}
int main(){
	int n , a[100];
	Input(a , n);
	Sort(a ,n);
	return 0;
}
