#include<iostream>
using namespace std;

void Input(int a[] , int&n){
	do{
	cout<<" Nhap n : ";cin>>n;
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
void AddNumber(int a[] , int &n , int pos , int value){
	for(int i = n ; i > pos ; i--){
		a[i] = a[i-1];
	}
	n++; a[pos] = value;
}
void AddNbAfferNegative(int a[] ,int &n , int x){
//Cach1 : simple 
//	int count = 0;
//	for(int i = 0 ; i < n ; i++){
//		if(a[i] > 0) count++;
//	}
//	if(count < n){
//		for(int i = 0 ; i < n ; i++){
//			if(a[i] < 0){
//			AddNumber(a , n , i+1 , x);
//			i++; break;
//			}
//		}
//	}else{
//		AddNumber(a , n , n , x);
//	}
//Cach 2
 int i = 0;
   while(a[i] >= 0 && i<n-1)
   	i++;
	AddNumber(a , n , i+1 , x);
	Ouput(a , n);
}
void SwapC(int*a , int *b){
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
void SwapCplus(int&a , int &b){
	int tmp = a;
	a = b;
	b = tmp;
}
void SoftNumber(int a[] , int n){
	
//sap xep giam dan 
		for(int i = 0 ; i < n - 1 ; i++){
		for(int j = i+1 ; j < n ; j++){
			if(a[i] < a[j]){
			swap(a[i] , a[j]);
	        }
		} 
	}
	//C1
//tim ra vi tri dau tien nho hon max	
//	int index1 , index2;
//	for(int i = 0 ; i < n; i++){
//		if(a[i] > a[i+1])
//		 {index1 = i+1; break;} 
//	}
////tim ra vi tri dau tien lon hon min 
//	for(int i = n - 1 ; i > 0 ; i--){
//		if(a[i] < a[i-1])
//		 { index2 = i-1; break;}
//   }
////sap xep tang dan tu max den min 
//	for(int i = index1 ; i < index2 ; i++)
//	{
//		for(int j = i+1 ; j <= index2 ; j++){
//			if(a[i] > a[j]){
//			swap(a[i] , a[j]);
//		   }
//		}
//	}
	//C2
int lastMaxPosition = 0 , firstMinPosition = n-1;
int Max = a[0] , Min = a[n-1] , i = 0;
  while(a[i] == Max || a[n-1-i] == Min){
  	if(a[i] == Max) lastMaxPosition++;
  	if(a[n-1-i] == Min) firstMinPosition--;
  	i++;
  } 
  while(lastMaxPosition < firstMinPosition){
  	SwapCplus(a[lastMaxPosition++] , a[firstMinPosition--]);
  }
 Ouput(a , n);
}
int main(){
	
	int a[100] , n;
	Input(a , n);
	int x ;  
	cout<<" Nhap x : ";
	cin>>x;
	cout << "\nCau a: Mang sau khi them x: ";
    AddNbAfferNegative(a , n , x);

	cout << "\nCau b: Mang sau khi sap xep : ";
	SoftNumber(a , n);
	

	return 0;
}
