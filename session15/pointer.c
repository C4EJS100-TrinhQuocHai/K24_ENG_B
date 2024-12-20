#include <stdio.h>
/*
	con tro (pointer) 
*/
int main() {
    int a=5;
    int *ptr;// pointer : tao bien con tro co ten ptr
    printf("dia chi cua bien a trong bo nho ram cua may tinh %d: \n",&a);
    ptr=&a;// gan dia chi cua bien a cho con tro ptr;
    printf("dia chi cua con tro ptr la %d \n",ptr);
    *ptr=15;
    // gia tri cua bien a se 15;
    printf("gia tri cua bien a sau: %d",a);
  return 0;
}

