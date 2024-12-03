#include <stdio.h>

int main() {
  // tim kiem nhi phan (binary search) MANG PHAI DUOC SAP XEP
  // 	int arr[8]={2,13,5,4,8,5,7,6};
  int arr[8]={2,4,5,5,6,7,8,13};
  int start=0; // khai bao vi tri bien trai;
  int end=7;  // khai bao vi tri bien phai;
  int mid;
  int item; // bien de nguoi dung nhap gia tri can tim kiem
  // cho nguoi dung nhap gia tri tim tim
  printf("moi ban nhap gia tri can tim kiem");
  scanf("%d",&item);
  while(start<=end){
  	 mid= (start+end)/2;
  	 if(arr[mid]==item){
  	 	// in ra vi tri cua phan tu mid
  	 	printf("phan tu %d co vi tri thu %d ",item,mid);
  	 	return;
  	 }else if(arr[mid]<item){
  	 	start=mid+1;
  	 }else{
  	 	end=mid-1;
  	 }
  }
   printf("khong tim thay phan tu %d",item);
  
  return 0;
}

