#include <stdio.h>
 /*
 	THAM SO TRONG HAM: parameter
 	-tham so giup ham co the tai su dung.
 	-Khi khai bao ham, ben trong(KHAI BAO THAM SO);
 */
 /*
 	DOI SO TRONG HAM: argument
 	-khi goi ham truyen gia tri thi day duoc goi la doi so.
 */
 // khai bao ham tinh tong 2 so a, b
 int sum(int a, int b, int c){
 	// ham sum co 2 tham so, a, b;
 	printf("tong 2 so %d va %d la: %d  \n",a,b, a+b);
 }
int main() {
  // muon ham duoc thuc thi, thi cac e phai goi ham trong main!
 //  printf("xin chao");
 sum(1,2,5);// khi goi ham truyen 2 gia tri doi so (argument)
 sum(5,5,7);// moi khi goi ham, tham so giup tai su dung ham.
 sum(15,5,9);
  return 0;
}

