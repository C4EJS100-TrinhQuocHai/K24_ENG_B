#include <stdio.h>

void changeCount(int *x);
	// khai bao ham nguyen mau
int main() {
   int count=5;
   // printf("dia chi cua bien count la : %d \n",&count);//6487580
   printf("gia tri cua bien count truoc: %d \n",count);
   changeCount(&count); //PASS BY REFERENCE - Truyen kieu tham chieu.
   printf("gia tri cua bien count sau: %d \n" ,count);
   return 0;
}
  // noi di trien khai cac ham
  changeCount(int *x){
  	 *x=15;
  // printf(" dia chi cua x: %d \n",x);
  }

