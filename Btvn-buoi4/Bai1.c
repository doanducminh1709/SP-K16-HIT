#include<stdio.h>

int main(){
	int n;
	do{
	printf("Nhap so nguyen n : ");
	scanf("%d",&n);
  }while(n <= 0 || n >= 100);
	
	int a[n] , i , count1 = 1;
	for(i = 0 ; i<n ; i++){
		printf("a[%d] = " , i);
		scanf("%d",&a[i]);
	}

	for( i = n-1 ; i > 0 ; i--){
		if(a[i] > a[i-1])
			count1++;
		if(a[i] < a[i-1])
			count1--;
	}
	if(count1 == n){
		printf("YES");
	}else if(count1 == -n){
		printf("NO");
	}else{
		printf("-1");
	}
	return 0;
}
