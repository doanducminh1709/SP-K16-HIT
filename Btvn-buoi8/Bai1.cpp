#include<iostream>
#include<algorithm>
using namespace std;

void Input(int*arr, int n) {
	for (int i = 0; i < n; i++) {
		cin >> *(arr + i);
	}
}
void Ouput(int* arr, int n) {
	for (int i = 0; i < n; i++){
		cout << *arr++<<" ";
	}
	cout << endl;
}
void FindAndShowData(int* arr, int n) {
	int count = 0 , sum = 0;
	for (int i = 0; i < n; i++) {
		if (*(arr+i) < 0 && abs(*(arr + i)) < 8) {
			count++;
			cout << *(arr + i) << " ";
			sum += *(arr + i);
		}
	}
	if (count > 0) cout << (float)sum / count;
	else cout << 0;
}
void TwoNdLargestValue(int* arr, int n) {
	int Max , Max2;
	Max = Max2 = arr[0];
	for (int i = 0; i < n; i++){
		Max = max(Max, *(arr + i));
	 }

	for (int i = 0; i < n; i++) {
		if (*(arr + i) < Max && *(arr + i) > Max2)
			Max2 = *(arr + i);
	}
	cout <<endl<< Max2<<endl;
}
void AddNumber(int* arr, int* n , int x) {
	
	for (int i = 0; i < *n; i++) {
		if (*(arr + i) < x) {
			arr = (int*)realloc(arr , (*n+1)*sizeof(int));
			for (int j = *n; j > i ; j--) {
				*(arr + j) = *(arr + j - 1);
			}
			*(arr + i + 1) = x;
			 
			*n=*n+1;
		}
	}
}
int main() {

   int n , x;
   	do {
		cin >> n;
	} while (n < 1 || n > 50);
   int *arr;
   arr = (int*)malloc(n*sizeof(int));
   Input(arr , n);
   cin>>x;
   cout<<endl;
   
   Ouput(arr , n);
   
   FindAndShowData(arr , n);
   
   TwoNdLargestValue(arr , n);
   
   AddNumber(arr , &n ,x);
   Ouput(arr , n);
   
   free(arr);	
return 0;
}
//8 -5 2 6 7 -3 2 1 2
