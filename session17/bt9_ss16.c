#include <stdio.h>
#include <stdlib.h>

// xay dung ham them phan tu vao trong mang
int addElement(int *arr, int value, int index, int *n);

// cu phap realloc
// arr= realloc(arr,(*n+1)*sizeof(int))
int main() {
  int *arr;
  int n;
  printf("moi ban nhap so luong phan tu: ");
  scanf("%d",&n);
  // cap phat bo nho bang malloc gom n phan tu  
  arr= (int *)malloc(n*sizeof(int));
  for(int i=0; i<n; i++){
  	printf("nhap phan tu thu %d : ",i+1);
  	scanf("%d",arr+i);
  }
   //  goi ham them phan tu
   addElement(arr,30,3,&n);
  // in ra cac phan tu trong mang
  for(int i=0; i< n; i++){
  	printf("%d \t",*(arr+i));
  }
  
 
  return 0;
}
//  di trien khai cac ham
  addElement(int *arr, int value, int index, int *n){
  	// truoc khi them phai kiem tra xem vi tri muon them co
	// thoa man hay khong.
  	if(index<0||index>*n){
  		printf("vi tri them khong hop le!");
  		return 0;
  	}
  	//vi tri them thoa man
  	// di cap phat them o nho cho mang
  	arr = realloc(arr,(*n+1)*sizeof(int));
  	// tien hanh dich chuyen phan tu
  	for(int i=*n; i>index; i--){
  		*(arr+i)=*(arr+i-1);
  		// 6 5 4 
  	}
  	*(arr+index)=value;
  	(*n)++;// tang kich thuoc len 1.
  	
  }

