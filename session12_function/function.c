#include <stdio.h>
// ham (function)
// tai phai dung ham: giup viet cac doan ma code ben trong ham
// giup code co the tai su dung ( viet 1 lan va dung duoc nhieu lan


// cu phap khai bao ham:

	/*
		int: kieu tra ve cua ham. ( float, char,.....)	
		main: ten ham ( dat ten ham theo muc dich, chuc nang, quy tac
			dat ten ham nhu ten bien).
		tim so lon nhat trong mang
		int timMax(){
			return max
		}
		void sayHello(){
			printf("xin chao!");
		}
	*/
// cac loai ham
	/*
		cac loai ham co ban:
		1. ham co kieu du lieu tra ve, khong co tham so.
		2. ham co kieu du lieu tra ve va co tham so.
		3. ham khong co kieu du lieu tra ve, khong co tham so.
		4. ham khong co kieu du lieu tra ve va co tham so.
	*/
 // noi khai bao cac ham.
 int sum(){
 	//  ham co kieu du lieu tra ve la int, khong co tham so
 	int a=5;
 	int b=6;
// 	printf("tong 2 so %d va %d la: %d ",a,b,a+b);
 	return a+b;// ket qua tra ve cua ham
 }
 // muon ham duoc thuc thi, thi phai goi ham.( phai goi ben trong main)
 // khai bao ham khong co kieu du lieu tra va khong co tham so
 void sayHello(){
 	// muc dich in ra cau xin chao
 	// khong can kieu du lieu tra ve, khong can tham so
 	printf("xin chao sinh vien lop ENG_K24_B");
 }
 // ham khong co kieu du lieu tra ve va co tham so.
 void tinhTong(int a, int b){
 	printf("tong 2 so %d va %d la %d ", a,b, a+b);
 }
 
int main() {
	// khi chay chuong trinh C thi se di vao ham main de chay chuong trinh
	// tuc la logic code cac e viet trong ham main thi se duoc thuc thi
  printf("Hello World! \n");
  if(sum()>5){
//  	printf("tong 2 so lon hon 5");
  }else{
//  	printf("tong 2 so nho hon 5");
  }
//  sayHello();
	tinhTong(4,5);
  
  return 0;
}

