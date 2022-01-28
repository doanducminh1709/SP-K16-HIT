#include<stdio.h>
#include<math.h>

int main(){
	int n;
	do{
	printf("Nhap so nguyen n : ");
	scanf("%d",&n);
  }while(n <= 0 || n >= 100);
	
	int a[n] , i , j,mark , sum = 0;
	for(i = 0 ; i<n ; i++){
		printf("a[%d] = " , i);
		scanf("%d",&a[i]);
	}
	for(i = 0 ; i < n ; i++){
		mark = 1;
		if(a[i] > 1){
	     for(j = 2 ; j <= sqrt(a[i]) ; j++){
	       if(a[i] % j == 0) mark = 0; break;
	   }
	   if(mark == 1){
	   	printf("%d ",a[i]);
	   	sum+=a[i];//sum= sum+a[i];
	   }
	}
}
	printf("\nsum = %d" , sum);
	return 0;
}
