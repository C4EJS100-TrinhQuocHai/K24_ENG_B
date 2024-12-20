#include <stdio.h>

void search(int *arr);
int main() {
	int arr[]={1,2,3,4,5};
	int size = sizeof(arr)/sizeof(arr[0]);
	printf("Mang ban dau la:\n");
	for(int i=0; i<size; i++){
  		printf("%d ", arr[i]);
	}
	printf("\n");
	search(arr,100,2);
	
	printf("Mang sau khi sua la: \n");
	for(int i=0; i<size; i++){
		printf("%d ", arr[i]);
	}
	}

  return 0;
}
void search(int arr[],int newValue,int index){
	if(index<0 && index>5){
		printf("Gia tri ban nhap khong hop le");
	}else{
	*(arr+index)=newValue;
	
}


