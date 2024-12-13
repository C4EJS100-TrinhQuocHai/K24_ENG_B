#include <stdio.h>
 void swap(int x,int y);// ham nguyen mau (doi gia tri 2 bien)
 int main() {
  int a=5;
  int b=15;
  printf("gia tri cua a truoc= %d \n",a); //5
  printf("gia tri cua b truoc= %d \n",b); // 15
  swap(&a,&b);
  printf("gia tri cua a sau= %d \n",a); // 15
  printf("gia tri cua b sau= %d \n",b); //5
  
  
  return 0;
 }
  swap(int *x, int *y){
  	/*
	  x se mang dia chi cua bien a
	  y se mang dia chi cua bien b
	*/
  	int temp= *x; // 5; gia tri tai dia chi x 
  	*x=*y;
  	*y= temp;
  }

