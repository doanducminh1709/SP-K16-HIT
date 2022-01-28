#include<stdio.h>
#include<math.h>
int main(){
	int n;
	do{
	printf("Nhap so nguyen n : ");
	scanf("%d",&n);
  }while(n <= 0 || n >= 100);
	
	int a[n] , i , j,mark , sum;
	for(i = 0 ; i<n ; i++){
		printf("a[%d] = " , i);
		scanf("%d",&a[i]);
	}
//so chinh phuong
//C1
   for(i = 0 ; i < n ; i++){
   	int m = sqrt(a[i]);
   	if(a[i] == m*m){
   		printf("%d ", a[i]);
	   }
   } 
//C2
printf("\nSo chinh phuong : "); 	
	for(i = 0 ; i < n ; i++){
		mark = 0;
		for( j = 1; j <= sqrt(a[i]) ; j++){
			if(a[i] / sqrt(a[i]) == j){
				mark = 1;
			}
		}
		if(mark == 1){
			printf("%d " , a[i]);
		}
	}
	
	
//so hoan hao	
printf("\nSo hoan hao : ");
	for(i = 0 ; i < n ; i++){
	     sum = 0;
       for(j = 1 ; j <= a[i] ; j++){
       	if(a[i] % j == 0) sum +=j;
	   }
	   if(sum == a[i]*2){
	   	printf("%d ",a[i]);
	   }
	}
	return 0;
}
