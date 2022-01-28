#include<stdio.h>

int main(){
	
	int i = 0;
	for( ; i < 100 ; i++){
	   	printf("%d\t",i);
		if((i+1) % 10 == 0)
			printf("\n");
	}
return 0;	
}
