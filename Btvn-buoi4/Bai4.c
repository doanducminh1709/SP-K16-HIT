#include<stdio.h>

int main(){
	
	int n;
	do{
	printf("Nhap so nguyen n : ");
	scanf("%d",&n);
  }while(n <= 0 || n >= 100);
	float a[n] , max;
	int i ,j , count1 = 1 ,count2 = 1;
	for(i = 0 ; i<n ; i++){
		printf("a[%d] = " , i);
		scanf("%f",&a[i]);
	}
	max = a[0];
	for(i = 0 ; i < n ; i++){
		if(a[i] > max) max= a[i];
	}
	for(i = 0 ; i < n ; i++){
		if(max == a[i])
		printf("%d " , i+1);
	}
return 0;	
}
