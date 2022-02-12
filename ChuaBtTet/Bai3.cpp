#include<iostream>
#include<cmath>
using namespace std;

void Input(int &m ,int &n){
	do{
		cin>>n>>m;
	}while(n < 4 || n > m);
}
void SumOfParagraphAllowed( int n , int m){
	int sum1 , sum2;
	sum1 = sum2 = 0;
	for(int i = 0 ; i <= m ; ++i){
		if(i <= n){
			if(i % 3 == 0) sum1+= i;
		}
		else if(i > n && i <= m){
			if(i % 3 == 0) sum2 += i;
		}
	}
	cout<<sum1<<endl<<sum2<<endl;
}
double ResultPn(int n){
   int i =  0;
   double R = 0 , Pn;
   for(int i = 1 ; i <= n ; i++){
   	Pn = sqrt(i+R);
   	R = Pn;
   }
   return Pn;	
}
int main(){
	int n , m;
	Input(m , n);
	SumOfParagraphAllowed( n , m);
	cout<<ResultPn(n);
	return 0;
}
