#include <stdio.h>

int main() {
 	int arr[]={3,1,2,4,8,5};
 	
 	for(int i= 0;  i<6; i++){
 		int minIndex=i;
 		for(int j= i+1; j<6;j++){
 			if(arr[j]<arr[minIndex]){
 				minIndex=j;
 			}
 		}
 		if(minIndex!=i){
 			int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
 		}
 	}
 	for(int i=0; i <6; i++){
 		printf("%d",arr[i]);
 	}
 	
  return 0;
}

