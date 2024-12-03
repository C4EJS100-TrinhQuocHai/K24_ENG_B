#include <stdio.h>

int main() {
  int arr[5]={3,1,7,5,4};
  int count=0;
  for(int i=0; i<5; i++){
  	for(int j=0; j<5-1-i; j++){
  		count++;
  		if(arr[j]>arr[j+1]){  // 7 5
  			int temp;
  			temp= arr[j+1]; 
  			arr[j+1]=arr[j]; 
  			arr[j]=temp;
  		}
  	}
  }
  printf("%d \n ",count);
	// in mang sau khi da duoc sap xep
	for(int i=0; i<5; i++){
		printf("%d \t",arr[i]);
	}
  return 0;
}

