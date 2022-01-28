#include<stdio.h>

int main(){
int n , i = 1 , A = 0, B = 1, C = 1;
do{
	printf("Nhap n : "); scanf("%d",&n);
	for( ; i <= n ; i++){
		A+=i;//A= A+i;
		B+=(2*i);//B=B+(2*i)
		C+=(2*i+1);//C=C+(2*i+1)
	}
	printf(" A = %d\n B = %d\n C = %d" , A , B , C);
	
}while(!(n>=0&&n<=100));

return 0;	
}
