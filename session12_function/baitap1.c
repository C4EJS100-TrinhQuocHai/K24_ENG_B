#include <stdio.h>
/*
	xay dung ham tinh tong 2 so co ket qua tra ve la tong tinh duoc.
	kiem tra ket qua xem tong cua 2 so la so le hay so chan.
*/
int tinhTong(int a, int b){
	return a+b;
}
int main() {
 	if(tinhTong(3,4)%2==0){
 		printf("tong cua 2 so la so chan");
 	}else{
 		printf("tong cua 2 so la so le");
	 }
  return 0;
}

