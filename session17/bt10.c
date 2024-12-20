#include <stdio.h>
int delete(int *arr,int index,int *n);
int main() {
  int *arr;
  int n;
  int index;
  printf("nhap so phan tu trong mang: ");
  scanf("%d",&n);
  arr=(int *)malloc(n*sizeof(int));
  for(int i=0;i<n;i++){
  	printf("nhap %d ",i+1);
  	scanf("%d",arr+i);
  }
  printf("\n nhap vi tri muon xoa");
  scanf("%d",&index);
  delete(arr,index,&n);
  for(int i=0;i<n;i++){
  	printf("%d ",*(arr+i));
  }
  printf("so phan tu trong mang %d",n);
  return 0;
}
delete(int *arr,int index, int *n){
	if(index<0||index>*n){
		printf("vi tri ko hop le")
		return 0;
	}
	for(int i=index;i<*n;i++){
		*(arr+i)=*(arr+i+1);
	}
	arr= realloc(arr,(*n-1)*sizeof(int));
	(*n)--;
}

