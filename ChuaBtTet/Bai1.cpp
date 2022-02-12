//Bai 1 
#include<iostream>
#include<cmath>
using namespace std;
#define max LONG_MIN

void Input(int a[], int &n ){
	do{
		cin>>n;
	}while(!(1<= n && n <= 100));
  for(int i = 0 ; i < n ; ++i)
    cin>>a[i];
}
void Ouput(int a[] , int n){
	for(int i = 0 ; i < n ; ++i)
	  cout<<a[i]<<" ";
}
 bool CheckScp(int n){
 	int m = abs(sqrt(n));
 	if(m*m == n) return true;
 	return false;
 }
 int CheckSnt(int n){
 	for(int i = 2 ; i*i<=n; ++i)
 	   if(n % i == 0) return -1;
 	return n>1;   
 }
 bool CheckShh(int n){
 	int sum=0;
 	for(int i = 1; i <= n/2 ; i++){
 		if(n % i == 0) sum+=i;
	 }
	 if(sum == n) return true;
	 return false;
 }
 void AddNumber(int a[] , int &n , int pos , int value){
 	for(int i = n ; i > pos ; i--){
 		a[i] = a[i-1];
	 }
	 a[pos] = value; n++;
 }
 void DeleteNumber(int a[] , int &n , int pos){
 	for(int i = pos ; i < n ; i++)
 	{
 		a[i] = a[i+1];
	 }
	 n--;
 }
 void AllXSatisfy(int a[] , int &n , int &x){
 	   cin>>x;
	 int i  = 0 , mark = 1;
	 for(;i<n;++i){
 	  	if(CheckScp(a[i])){
 	  		AddNumber(a , n , i+1 , x);
 	  		i++; 
			mark = 0;
		}
	 }
	 if(mark == 1){
	 	int j = 0 , maxPrime = max, cnt = 0;
	 	for(; j<n;++j){
	 	   if(CheckSnt(a[j]) == 1 && a[j] > maxPrime){
	 	   	  cnt++;
	          maxPrime = a[j]; 	   	  
			}
		 }
//		 cout<<maxPrime<<endl;
	if(cnt > 0){
		for(i = 0 ; i < n ; i++){
		   if(a[i] == maxPrime){
		   		AddNumber(a , n , i+1, x);
		   		   i++;
		     }
	    }
	}else{
		AddNumber(a , n , n , x);	
	}	 
  }
    cout<<endl;
  	Ouput(a , n);
}
int UclnShh(int n){
	int UclnMax = max, i = 1;
	for(; i <= n/2 ; ++i){
	  if(n % i == 0 && i > UclnMax)
	    UclnMax = i;	
	}
	return UclnMax;
}
void EditArrHasLuckyNumber(int a[] , int n){
   int count=0 , i = 0;
   while(i < n){
   	if(CheckShh(a[i++])){ count++;}
     i++;
   }	
   if(count > 0){
   	  for(int i = 0 ; i < n ; ++i){
   	  if(CheckShh(a[i])) a[i] = UclnShh(a[i]);
		}
		Ouput(a , n);
    }else{
      Ouput(a,n);
	}
}
//Cau c
void BeautifulyArray(int a[] , int &n){
	int i = 0;
     for( ; i < n-1 ; ++i){
     	if((a[i] % 2== 0 && a[i+1] % 2 == 0)
		 ||(a[i] % 2==1 && a[i+1] % 2 == 1)){
     		DeleteNumber(a , n , i); 
			i--;
		 }
	 }
	Ouput(a , n);
}

int main(){
	int a[100] , n , x;
	Input(a,n);	
	//cau a
	AllXSatisfy(a,n,x);
	//cau b
    cout<<endl;
 	EditArrHasLuckyNumber(a,n);
 	//cau c
 	cout<<endl;
 	BeautifulyArray(a,n);

 	return 0;
}
