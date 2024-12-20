#include <stdio.h>
/*
 tham chieu  : chieu la tro toi 1 dia chi o nho
 tham tri	 : sao chep truyen gia tri
*/
 struct SinhVien{
 	char fullName[50];
 	int age;
 };
 void updateName(struct SinhVien *x){
// 	strcpy(x->fullName,"le minh ha");
    strcpy((*x).fullName,"le minh ha");
 	
 }
int main() {
	struct SinhVien sv;// ban than sv cung la 1 bien
	strcpy(sv.fullName,"le minh thu");
	printf("ten cua sinh vien truoc: %s \n",sv.fullName);
	updateName(&sv);
	printf("ten cua sinh vien sau: %s",sv.fullName);

  return 0;
}

