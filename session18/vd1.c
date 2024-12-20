#include <stdio.h>
// khai bao mot cau truc  SinhVien
struct SinhVien{
	// khai bao cac thuoc tinh cua cau truc
	char codeId[20];
	char fullName[50];
	char address[100];
	char phoneNumber[15];
	int age;
};
int main() {
    struct SinhVien sv1={"ABCD001","le van a","ha noi",
	"0986968656",20};
    struct SinhVien sv2;
    // di cap nhat cac thong tin sinh vien
    // hien thi thong tinh
    
    strcpy(sv1.address,"sai gon");
    strcpy(sv1.phoneNumber,"082366666");
    printf("ten sinh vien : %s \n",sv1.fullName ); // dot operator
	printf("so dien thoai: %s \n",sv1.phoneNumber);
	printf("tuoi sinh vien: %d \n",sv1.age);
  return 0;
}

