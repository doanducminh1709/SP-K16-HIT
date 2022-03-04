#include<bits/stdc++.h>
using namespace std;

void Input(int*Arr , int n){
	for(int i = 0 ; i < n ; i++)
    	cin>>*(Arr++); //*(Arr++) = *(Arr+i) = Arr[i]
    	cout<<endl;
}
void Ouput(int *Arr , int n){
	for(int i = 0 ; i < n ; i++)
	    cout<<*(Arr+i)<<" ";
	    cout<<endl;
}
void bubbleSortOpt(int*arr, int n , int &cnt) {  
    
   bool isSwapped = true;
   int i = n - 1;
   cnt = 0;
   while (i > 0) {
        isSwapped = false;
        for (int j = 0; j <= i - 1; j++) {
             if (arr[j] > arr[j + 1]) {
                   swap(arr[j], arr[j + 1]);
                   isSwapped = true;      
             }
        }
        if (isSwapped == false) {
             break;
        }else {
            cnt++;  i--;
        }
   }
   Ouput(arr , n);
}
int Ucln(int a , int b){
	while(a != b){
		if(a > b)
			a-=b;
		else
		  b-=a;
	}
	return a;
}
void ChangeArray(int*Arr , int &n , int cnt){
	for(int i = 0 ; i < n ; i++){
	  if(*(Arr+i)< 0) *(Arr+i)*=-1; 
    }
     bubbleSortOpt(Arr , n , cnt);
     cout<<cnt<<endl;
     
     for(int i = cnt - 1 ; i <= n - 1 ; i++){
     	*(Arr+i) = *(Arr+i+1);
	 }
    n--;
}
void SumOfSatifiedPos(int*Arr , int n){
	int sum1 , sum2 ;
	sum1 = sum2 = 0;
	for(int i = 1 ; i < n ; i+=2){
		sum1+=Arr[i];
		sum2+=Arr[i-1];
	}
	cout<<sum2<<endl<<sum1<<endl;
	cout<<Ucln(sum1 , sum2);
	
	if(sum1+sum2-(Ucln(sum1,sum2) * 20) < 0) cout<<"\nTrue";
	else cout<<"\nFalse";
}

int main(){
	
	int *Arr , n , cnt;
	do{
		cin>>n;
	}while(n <= 0);
	//Nhap xuat cap phat dong trong C++
	Arr = new int[n];
	Input(Arr , n);
	//In day tang dan 
	ChangeArray(Arr , n , cnt);
	Ouput(Arr , n);
	//Tinh tong theo chi so
	SumOfSatifiedPos(Arr , n);
	
	//Xoa bo nho dem 
	delete []Arr;
	
	return 0;
}
