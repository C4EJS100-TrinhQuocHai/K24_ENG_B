#include <stdio.h>
int main() {
  	int arr[]={1,2,1,1,4,4,5,2,7,2,4};
  	int maxCount; // so lan xuat hien lon nhat
  	int item; // phan tu xuat hien nhieu nhat
  	//  tao 1 cai mang de chua cac phan tu co so lan xuat hien nhieu
  	int result[100];
  	int index=0;// de gan vi tri cac phan tu trong result
  	for(int i=0;i<11;i++){
  		int count=0;// dem so lan xuat hien cua phan tu
  		for(int j=0; j<11;j++){
  			if(arr[i]==arr[j]){
  				count++;	
  			}
  		}
  		if(count>maxCount){
  			maxCount=count;
  		}
  	}
  	//  tim duoc  so lan phan tu duoc lap  nhieu nhat
  	for(int i=0; i<11; i++){
  		int count=0;
  		for(int j=0; j<11; j++){
  			if(arr[i]==arr[j]){
  				count++;
  			}
  		}
  		// kiem tra count voi bien maxCount
  		if(count==maxCount){
  			// chay 9 lan
  			// lay ra phan tu lon nhat : arr[i]
  			// truoc khi dua vao mang result thi phai kiem tr
  			// xem phan tu do co trong mang result chua
  			int flag=-1;
  			for(int k=0;k<index; k++){
  				if(arr[i]==result[k]){
  				   flag=1;
  				   break;
  				}
  			}
  			// cho for chay het roi kiem tra bien flag
  			// flag==-1; chung to no chua co trong result
  			printf("gia tri flag %d \n  ",flag);
  			if(flag==-1){
  				result[index]=arr[i];
  				index++;
  			}
  		}
  	}
	  	printf("gia tri index %d",index);
	  	// cuoi cung in ra mang result
	  	for(int i=0; i< index;i++){
	  		printf("\n %d",result[i]);
	  	}
  return 0;
}

