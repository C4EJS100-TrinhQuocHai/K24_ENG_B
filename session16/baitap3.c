#include <stdio.h>
int sum(int *a,int *b,int *result); // khai bao nguyen mau ham
int main() {
  int a,b,result;
  printf("moi nhap gia tri a= ");
  scanf("%d",&a);
  printf("moi nhap gia tri b= ");
  scanf("%d",&b);
  printf("tong cua %d va %d la:%d ",a,b,sum(&a,&b,&result));

  return 0;
}
// noi di trien khai cac ham
  sum(int *a, int *b, int *result){
  	*result= *a + *b;
  	return *result;
  }

