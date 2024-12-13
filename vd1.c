#include <stdio.h>
/*
	Tham chieu: truyen du lieu kieu tham chieu (reference)
	Tham tri : truyen du lieu kieu tham tri (primitive)
*/
 void changeValue(int x, int y){
 	 int temp = x;
 	 x=y;
 	 y=temp;
 	 // hoan doi gia tri
 }
int main() {
	  int a=6;
	  int b=16;
	  printf("gia tri cua a truoc: %d \n",a);
	  printf("gia tri cua b truoc: %d \n",b);
	  changeValue(a,b);
	  printf("gia tri cua a sau: %d \n",a);
	  printf("gia tri cua b sau: %d \n",b);
  return 0;
}

