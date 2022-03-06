#include<iostream>
using namespace std;
//Bai toan tinh giai thua su dung de quy 
int Gt(int n){
	if(n == 0 || n == 1) return 1;
	return n*Gt(n-1);
	//3 buoc 
	//1.tim duoc cai truong hop co so cua ham de quy ()
	//2.xac dinh ham de goi de quy  
	//3. Ham minh goi de quy thi no se bat buoc phai goi duoc den cai truong hop co so 
	
//Vd : n = 4
//	n*Gt(3);
//  3*(2);
//	2*(1) = 2
// 3 * 2 = 6;
// 4* 6 = 24
}

//BAI TOAN TINH SO FISO FIBONACI
//DAY SO FIBONACI : 0 , 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610… 
int Fibonaci(int n){
	//truong hop co so n = 0 || n = 1 thi F(n) = n
	//F0 = 0  //n = 0
	//F1 = 1  //n = 1
	if(n < 2){
		return n;
	}
    return Fibonaci(n- 1) + Fibonaci(n-2);	
//F2 = 1  voi n = 2
//	F(n) = F(n-1) + F(n-2);
//F(2) = F(1) + F(0);
//  Th: n = 3
//    F(3) = F(2) + F(1) = 1 + 1 = 2;
//    F(2) = F(1) + F(0) = 1 + 0 = 1;
//      
//	F(1) = 1 , F(0) = 0
}
//Su dung vong lap 
int Fibonaci2(int n){
	int F0 = 0 , F1 = 1 , Fn;
	for(int i = 2 ; i <= n ; i++){
		Fn = F0+F1;
		F0 = F1;
		F1 = Fn;	
	}
	return Fn;
}
//Tinh tong [1 , n] = 3 + 2 + 1 + 0
int TinhTong(int n){
	if(n == 1) return n;
	return n + TinhTong(n-1);
}
//Tinh uoc chung lon nhat cua 2 so a va  b
int Ucln(int a , int b){
//truong hop co so 	
	if(b == 0) return a;
//Truong hop de quy 
	return Ucln(b , a%b); 
	//a % b = b  
//	Th : a = 10 , b = 15
//  B1 :  b = 10 , a = 15;
//	Ucln(10 , 15%10 = 5)	
//	=> UCLN(10 , 5) = 5 
}
//==> Su dung vong lap 
//Tinh giai thua
unsigned long long Gt2(unsigned int n){
	long long T = 1;
	for(int i = 2 ; i <= n ; i++){
		T*=i;
	}
	return T;
}
//Tim uoc chung lon nhat
int Ucln2(int a , int b){
   while(a != b){
   	 if(a > b)
   	   a -=b;
   	 else 
   	   b-=a;
   }	
   return a;	
}

int main(){
	
//	cout<<" GIA TRI 4! = "<<Gt(4);
//	cout<<" Gia tri Fibonaci(3) = "<<Fibonaci(3);
//	cout<<" Gia tri TinhTong(3) = "<<TinhTong(3);
//  cout<<" Ucln(10 , 15) = "<<Ucln(10 , 15);
//  cout<<"Su dung de quy : Gt(n) = "<<Gt(60);
//    cout<<" Su dung vong lap Gt(n) = "<<Gt2(60);
//   cout<<" Su dung vong lap F(n) = "<<Fibonaci2(4);
	return 0;
}
