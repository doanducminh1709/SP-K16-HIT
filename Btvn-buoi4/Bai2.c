#include<stdio.h>

int main(){
	
	int n;
	do{
	printf("Nhap so nguyen n : ");
	scanf("%d",&n);
  }while(n <= 0 || n >= 100);
	float a[n];
	int i ,j , count1 = 1 ,count2 = 1;
	for(i = 0 ; i<n ; i++){
		printf("a[%d] = " , i);
		scanf("%f",&a[i]);
	}
	
	for(i = 0 ; i < n - 1 ; i++){
		for(j = i+1 ; j< n ; j++){
			if( a[i] < 0 && a[j] < 0 &&a[i] < a[j]){
				float tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
	for(i = 0 ; i < n ; i++)
	printf("%.1f  " , a[i]);
	
	return 0;
}
