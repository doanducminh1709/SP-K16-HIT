#include<stdio.h>
int main(){
	int n , m, k;
	printf(" Nhap vao so ban duoc nhan keo : ");
	scanf("%d",&n);
	printf(" Nhap vao so tui keo : ");
	scanf("%d",&m);
	printf(" Nhap vao so keo moi tui : ");
	scanf("%d",&k);
	
	if((1<= n&&n <= 20) && (1<= m&& m <= 5) && (10 <= k && k <= 50)){
		if((m*k) % n == 0)
			printf("no");
		else
			printf("yes");
	}else{
		printf(" Nhap lai dieu kien thoa man!");
	}
	return 0;
} 
