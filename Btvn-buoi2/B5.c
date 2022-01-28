#include<stdio.h>
int main(){
	int N , M;
	printf(" Nhap vao thang : ");
	scanf("%d",&N);
	printf(" Nhap vao nam : ");
	scanf("%d",&M);
	
	switch(N){
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		{
			printf(" 31 ngay ");
			break;	
		}
		case 2:
		{
		if(M % 4 == 0)
		   printf(" Nam nhuan , thang 2 co 28 ngay ");	
	    else 
		    printf(" Nam thuong , thang 2 co 29 ngay ");
		break;			
		}
		
		case 4: case 6: case 9: case 11:
		{
		printf(" 30 ngay !");
			break;		
		}	
		default:
		 {
		 	printf(" Du lieu khong dung , nhap lai! ");
		 	break;
		 }
    }
	return 0;
}
