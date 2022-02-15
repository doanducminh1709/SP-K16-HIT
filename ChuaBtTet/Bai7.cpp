#include<iostream>
#include<cstring>
using namespace std;

int main(){
	
  char str[100];
  cin.getline(str,100);

  //char str1[100] , str2[100] , str3[100];
  //Vi tri ket thuc cua tu dau tien  
  int i = 0 , cnt = 0;
  while(str[i++] !=' '){ cnt++; }
  
//  int j = strlen(str)-1;
//  while(str[j] != ' '){
//  	j--;
//  } 
//  for(int i = j+1 ; i < strlen(str) ; i++){
//  	str3[i] = str[i];
//  	cout<<str3[i]; 
//  }
//  cout<<endl;
//  //
//  for(int i = cnt ; i <= j ; i++){
//  	str2[i] = str[i];
//  	cout<<str2[i]; 
//  }
int j = strlen(str) - 1;
   while(str[j] != ' '){
   	j--;
   }
   for(int i = j+1 ; i < strlen(str) ; i++){
     cout<<str[i]; 
   }
//  int k = 0;
  for(int i = cnt ; i <= j ; i++){
     cout<<str[i];
//	k++;
  }
  for(int i = 0 ; i < cnt ; i++){
  	cout<<str[i];
  }
  //In tu dau  
//  for(int i = 0 ; i < cnt ; i++){
//  	str1[i] = str[i];
//	  cout<<str[i]; 
//  } 
  
	return 0;
}
