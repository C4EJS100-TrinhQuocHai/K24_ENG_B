#include <stdio.h>
/*
	khai bao ham kiem tra xem ki tu duoc in ra voi so lan co ton tai trong 
	mang minh da khai bao chua
*/
 int check(char n, char arr[]){
 	 int length= strlen(arr);
 	 for(int i=0; i<length; i++){
 	 	if(arr[i]==n){
 	 		return 0;
 	 	}
 	 }
 	return 1;// chung to no khong ton tai trong mang checked
 }
int main() {
  char str[]="bbbcdac";
  char checked[50];
  int index=0;
  int length= strlen(str);
   for(int i=0; i<length; i++){
   	 int count=0;
   	 if(check(str[i],checked)){
   	 	for(int j=i; j<length; j++){
   	 		if(str[i]==str[j]){
   	 			count++;
   	 		}
   	 	}
   	 	printf(" %c xuat hien so lan la: %d \n",str[i],count);
   	 	checked[index]=str[i];
   	 	index++;
   	 }
   }
  return 0;
}

