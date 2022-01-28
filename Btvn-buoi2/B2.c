#include<stdio.h>
#include<math.h>

int main(){
	int a;
	printf("Enter a : ");
	scanf("%d",&a);
	if(a>=2 && a<=50){
//		C1
     printf("%f", pow(((1.0)*a/3),4));
//C2
     float result = pow(((1.0)*a/3),4);
     printf("\n%f",result);
//C3
      float b = (float)(a)/3;
	  printf("\n%f",pow(b,4));     
		
	}else{
		printf("Nhap lai a tm dieu kien! ");
	}
  return 0;	
}
