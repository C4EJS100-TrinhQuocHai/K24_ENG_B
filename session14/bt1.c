#include <stdio.h>
/*
	Viet chuong trinh cho nguoi dung nhap vao so tuoi
	sau do nhap ten day du.
	kiem tra neu tuoi lon hon 18 thi du tuoi xem phim CGV
	neu nho hon 18 thi khong du tuoi xem phim CGV
*/
int main() {
 char text[]=" x";
 int size= strlen(text);
 int count=0;
 for(int i=0; i<size; i++){
 	if(text[i]==' '){
 		count++;
 	}
 }
 printf("so luong ki tu %d",count+1);

  return 0;
}

