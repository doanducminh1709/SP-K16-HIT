#include<stdio.h>
#include<math.h>

int main(){
	
	int n , m;
	printf("Nhap so bong hoa : ");
	scanf("%d",&n);
	printf("Nhap so tien moi bong : ");
	scanf("%d",&m);
	long int soTien;
	if((1<=n&&n<=999) && ((7000<= m <=200000) && m % 100 == 0)){
		
	  if(n % 2 == 1 && n > 5){
//	  	sotien = n*m - n*m*0.2 viet gon la soTien = n*m*0.8;
         soTien = n*m*0.8;
         printf("  => So tien Hung phai tra : %ld" , soTien);
	  }else if(n % 2 == 0 && n >= 4){
	  	soTien = n*m*0.85;
	  	printf("   => So tien Hung phai tra : %ld" , soTien);
	  }else{
	  	soTien = n*m;
	  	printf("   => So tien Hung phai tra : %ld" , soTien);
	  }
	
	}else{
		printf("   => Nhap lai dieu kien thoa man!");
	}	
		
	return 0;	
}
