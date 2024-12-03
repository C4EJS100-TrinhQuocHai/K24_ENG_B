#include <stdio.h>
 // thuat toan sap xep chon (selection_sort)
int main() {
  //
  int arr[5]={4,5,1,7,2};
  for(int i=0; i<5; i++){
  	// gán vi tri nho nhat
  	int minIndex= i;
  	for(int j=i+1; j<5;j++){
  		if(arr[j]<arr[minIndex]){
  			minIndex=j;
  		}
  	}
  	// sau khi ket thuc for thì di doi cho
  	if(minIndex!=i){
  		//tien hanh doi vi tri
  		int temp;
  		temp= arr[minIndex];
  		arr[minIndex]=arr[i];
  		arr[i]=temp;
  	}
  }
	// in ra
	for(int i=0; i<5; i++){
		printf("%d \t",arr[i]);
	}  
  
  

  return 0;
}

