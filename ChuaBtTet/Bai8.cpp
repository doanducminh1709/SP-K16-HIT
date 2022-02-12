//chuyen 1 chuoi thanh cac ki tu 
#include<iostream>
#include<cstring>
using namespace std;

void XoaChiSoK(char name[] , int pos){
	for(int i = pos ; i < strlen(name) - 1 ; i++){
		name[i] = name[i+1];
	}
	name[strlen(name) - 1] = '\0';
}
void DinhDangXau(char name[]){
	//xoa cac khoang trang o dau chuoi 
	while(name[0] == ' '){
		XoaChiSoK(name  , 0);
	}
	//xoa cac khoang trang o cuoi chuoi 
	while(name[strlen(name) - 1] == ' '){
		XoaChiSoK(name  , strlen(name) - 1);
	}
	//xoa cac khoang trang lien ke nhau 
	for(int i = 0 ; i < strlen(name) ; i++){
		if(name[i] == ' ' && name[i+1] == ' '){
			XoaChiSoK(name , i);
			i--;
		}
	}
	strlwr(name);//viet chuoi thuong
	name[0] -= 32;//Cach viet hoa 
	for(int i = 1 ; i < strlen(name) ; i++){
		if(name[i] == ' ' && name[i+1] != ' '){
			//name[i+1] -= 32;
			putchar (toupper(name[i+1]));
		}
	}
}
int main(){
	
	char name[40];
	cin.getline(name , 40);
	DinhDangXau(name);
	cout<<name; 
	
	return 0;
} 
