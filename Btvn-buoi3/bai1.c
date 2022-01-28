#include<stdio.h>

int main(){
	
	int i , j , k ;
	i = j = k = 100;
	printf("-for lood : \n");
	for( i = 100 ; i > 0 ; i--){
		printf("%d  ",i);
	}	
	
	printf("\n-while lood : \n");
	while(k > 0){
		printf("%d  ",k);
		k--;
	}
	
	printf("\n-do while lood : \n");
	do{
		printf("%d  ",j);
		j--;
	}while (j > 0);
	return 0;
	
} 
