#include <stdio.h>

int main() {
  // khai bao mot mang so nguyen co 5 phan tu
  int numbers[5];
  // cho nguoi dung nhap vao tung phan tu
  for(int i=0;i<5;i++){
  	printf("moi ban nhap so thu %d :",i+1);
  	scanf("%d",&numbers[i]);
  }
  // in ra tung phan tu trong mang do
  for(int i=0; i<5; i++){
  	printf("numbers[%d]=%d \n",i,numbers[i]);
  }
  

  return 0;
}

