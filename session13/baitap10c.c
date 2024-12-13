#include <stdio.h>
// khai bao ham cho nguoi dung nhap gia tri phan tu
 void addAllItem(int arr[],int size){
 	for(int i=0; i<size; i++){
 		printf("phan tu thu arr[%d] : ",i);
 		scanf("%d",&arr[i]);
 	}
 }
 void showItems(int arr[],int size){
 	for(int i=0; i<size; i++){
 		printf("phan tu thu arr[%d] co gia tri %d \n",i,arr[i]);
 	}
 }
int main() {
  int arr[100];
  int size;
  int choose;
  do{
  	// than while
  	printf("1. them so luong phan tu va nhap gia tri \n");
  	printf("moi ban chon case");
  	scanf("%d",&choose);
  	switch(choose){
  		case 1:
  			// nhap so luong phan tu va gia tri
  			printf("moi ban nhap so luong phan tu");
  			scanf("%d",&size);
  			addAllItem(arr,size);
  			break;
  		case 2:
  			// in ra cac phan tu
  			showItems(arr,size);
  			break;
  		default:
  			//
  			break;
  	}
  	
  }while(choose!=8);

  return 0;
}

