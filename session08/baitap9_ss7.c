#include <stdio.h>

int main() {
  // yeu cau nguoi dung nhap so hang va so cot
  int m,n;//m la hang, n so cot
  printf("moi nhap so hang va cot");
  scanf("%d %d",&m ,&n);
  // khai bao mang 2 chieu
  int arr[m][n];
  // yeu cau nguoi dung nhap tung phan tu
  for(int i=0; i<m; i++){
  	for(int j=0; j<n; j++){
  		printf("nhap phan tu trong hang thu %d, cot %d: ",i+1,j+1);
  		scanf("%d",&arr[i][j]);
  	}
  }
  // in ra cac phan tu trong bien cua mang arr
  // in bien tren cung
  for(int i=0; i<n; i++){
  	printf("bien tren cung %d",arr[0][i]);
  }
  // in bien duoi cung
  printf("\n");
  for(int i=0; i<n; i++){
  	printf("bien duoi cung %d",arr[m-1][i]);
  }

  return 0;
}

