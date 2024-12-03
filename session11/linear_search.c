#include <stdio.h>

int main() {
	int arr[8]={2,13,5,4,8,5,7,6};
	int item;// khai bao phan tu can tim kiem
	int flag=-1;
	// thuc hien chuc nang tim kiem ( tim kiem tuyen tinh - linear search)
	// tim so 4 co trong mang arr hay khong, neu co thi in ra vi tri.
	int length= sizeof(arr)/sizeof(arr[0]);
	printf("moi ban nhap phan tu can tim kiem \n");
	scanf("%d",&item);
	for(int i=0;i<length; i++){
		if(arr[i]==item){
			flag=i;//1
			printf("phan tu %d nam o vi tri %d",item,i);
//			break;
//			return;
		}
	}
	// di kiem tra bien flag
	if(flag==-1){
		// khong tim thay phan tu trong mang
		printf("phan tu %d khong ton tai trong mang da cho",item);
	}

  return 0;
}

