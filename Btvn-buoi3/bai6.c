#include<stdio.h>

int main(){
	int n , i;
	do{
		printf("Nhap n : "); scanf("%d",&n);
		for( i = 1 ; i <= 10 ; i++){
			printf("%d x %d = %d\n" , n , i , n*i);
		}
	}while(n<2 || n > 9);
	
	return 0;
}
