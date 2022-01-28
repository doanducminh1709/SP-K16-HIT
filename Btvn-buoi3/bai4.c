#include<stdio.h>

int main(){
	
	int x , i = 1;
	long Gt = 1;
	printf("Nhap x : "); scanf("%d",&x);   
	for(; i <= x ; i++){
		Gt*=i;//Gt = Gt*i;
	}
   	printf("%d!= %ld" ,x , Gt);
	return 0;
}
