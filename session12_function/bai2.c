#include <stdio.h>
/*
	xay dung ham co tham so truyen vao la 1 mang bat ki
	ham co chuc nang in ra tat ca cac phan tu.
*/
 void inCacPhanTuTrongMang(int arr[], int size){
// 	int size= sizeof(arr)/sizeof(arr[0]);
 	for(int i=0; i<size;i++){
 		printf("phan tu thu %d la %d \n", i+1, arr[i]);
 	}
 }
int main() {
//  printf("Hello World!");
//  goi ham inCacPhanTuTrongMang.
 int numbers[]={1,2,3,4,5};
 int size= sizeof(numbers)/sizeof(numbers[0]);
 inCacPhanTuTrongMang(numbers,5);
  return 0;
}

