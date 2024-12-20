#include <stdio.h>
void update(int *arr, int index, int value);
void printfElement(int arr, int size);
int main() {
  int arr[]={3,5,7,9,11};
  int length= sizeof(arr)/sizeof(arr[0]);
  update(arr,2,99);
  printfElement(arr,length);
  return 0;
}
// trien khai ham
   update(int *arr, int index, int value){
// arr[index]= value;
	 *(arr+index)=value;
   }
   printfElement(int *arr, int size){
   	for(int i=0; i<size; i++){
   		printf("%d \t",*(arr+i));
   	}
   }
  

