#include <stdio.h>
// Mang 2 chieu.
// mang 2 chieu la gi: cac phan tu trong mang 1 chieu
// lai la 1 mang
int main() {
  // khai bao, truy xuat phan tu, duyet mang
  int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
  // mang arr co 3 mang con ung voi 3 hang
  // truy xuat phan tu trong mang 2 chieu
  printf("%d",arr[1][2]);
  printf("%d",arr[2][0]);
  // in ra cac phan tu trong mang 2 chieu
  for(int i=0; i<3; i++){
  	for(int j=0; j<3; j++){
  		printf("\n pt thu %d va cot thu %d la %d",i+1,j+1,arr[i][j]);
  	}
  }

  return 0;
}

