#include<iostream>
#include<cmath>
using namespace std;

int CheckSnt1(int n){
	for(int i = 2 ; i*i <= n ; i++){
		if(n % i == 0) return -1;
	}
	return n > 1;
}
bool CheckSnt2(int n){
	if(n < 2) return false;
	for(int i = 2 ; i * i <= n ; i++){
		if(n % i == 0) return false;
	}
	return true;
}
int Scp(int n){
	int m = sqrt(abs(n));
	if(m*m == n) return 1;
	else return -1;
}
int CountSsnt(int n){
	int cnt1 = 0 , cnt2 = 0;
	while( n > 0){
		int m = n % 10; n/= 10; cnt1++;
		if(CheckSnt2(m)){ cnt2++;}
	}
	if(cnt1 == cnt2) return 1;
	else return -1;
}
void Input(int a[] , int &n){
	cin>>n;
	for(int i = 0 ; i < n ; i++)
	cin>>a[i];
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
void DeleteNumber(int a[] , int &n , int pos){
	for(int i = pos ; i < n-1 ; i++){
		a[i] = a[i+1];
	}
	n--;
}

void CountAndAvgScp(int a[] , int n)
{
  int cnt = 0 ,sum = 0;
  for(int i = 0 ; i < n ; i++){
  	if(Scp(a[i])==1){
	  sum+=a[i]; cnt++;
	}
  }
	if(cnt == 0) cout<<"NO"<<endl;
	else cout<<cnt<<endl<<(float)sum/cnt<<endl;
}
void AddBeforeSnt(int a[] , int &n , int k){
	
	for(int i = 0 ; i < n ; i++){
		if(CheckSnt2(a[i])){
		AddNumber(a , n , i , k);
		 i++;	
		}
	}
 Ouput(a  , n);
}
void DeleteSsnt(int a[] , int &n){
	
  for(int i = 0 ; i < n ; i++){
    if(CountSsnt(a[i]) == 1){
     DeleteNumber(a , n , i);
	  i--;
    }
  }
  Ouput(a , n);
}
int main(){
	int n , a[100] , k;
	Input(a , n);
	do{
		cin>>k;
	}while(CheckSnt2(k));
	//cau a
    cout<<endl;	
	CountAndAvgScp(a , n);
	//cau b
	AddBeforeSnt(a , n , k);
	cout<<endl;
	//cau c
	DeleteSsnt(a , n);
	return 0;
}
