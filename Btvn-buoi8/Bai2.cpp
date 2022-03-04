#include<bits/stdc++.h>
using namespace std;

void Input(float * Arr , int &n){
	int i ;
	float x;
	n = i = 0;
	do{
		cin>>x;
		if(x == -1 || i == 50) break;
			Arr[i++] = x; n++;
	}while(true);
	cout<<endl;
}
void ShowArr(float*Arr , int n){
	for(int i = 0 ; i < n ; i++)
	  cout<<*(Arr+i)<<" ";
	  cout<<endl;
}
void DeleteNumber(float*Arr , int &n , int pos){
	for(int i = pos ; i < n - 1 ; i++){
		*(Arr+i) = *(Arr+i+1);
	}
	n--;
}

void DeleteNumbersDuplicate(float*Arr , int &n){
	for(int i = 0 ; i < n - 1; i++){
		for(int j = i+1 ; j < n ; j++){
			if(*(Arr+i) == *(Arr+j)){//Arr[i] == Arr[j]
                DeleteNumber(Arr , n , j);
				i--;
				//Cap phat lai bo nho vi luc nay mang da giam di 1 phan tu 
				Arr = (float*)realloc(Arr , (n-1) * sizeof(float));
		   }
		}
	}
}
void ShowArrSatifed(float*Arr ,int &n , float*B , float*C ){
	int cnt1 =  0 , cnt2 = 0;
	for(int i = 0 ; i < n ; i++){
		if(*(Arr+i) > 0) cnt1++;
		else cnt2++;
	}
	//Cap cho mang B va mang C 
	B = (float*)malloc(cnt1*sizeof(float));
	C = (float*)malloc(cnt2*sizeof(float));
	
	cnt1 = cnt2 = 0;
	for(int i = 0 ; i < n ; i++){
		if(*(Arr+i) > 0) B[cnt1++] = *(Arr+i);
		else C[cnt2++] = *(Arr+i);
	}
	//Xuat ra
	ShowArr(B , cnt1);
	ShowArr(C , cnt2);
	//Giai phong bo nho
	free(B);
	free(C);
}
int main(){
	int n;
	//Cach 1 cap phat bo nho dong trong C
	float *Arr , *B , *C;
	Arr = (float*)malloc(50*sizeof(int));
	Input(Arr , n);
	
	//Hien thi
	ShowArr(Arr , n);
	//Xoa cac phan tu trung nhau
	DeleteNumbersDuplicate(Arr , n);
	ShowArr(Arr , n);
	//Hien thi 2 mang B C
	ShowArrSatifed(Arr , n , B , C);
	
	free(Arr);
	return 0;
}

