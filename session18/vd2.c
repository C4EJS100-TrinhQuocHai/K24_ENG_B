#include <stdio.h>
struct SinhVien{
	// khai bao cac thuoc tinh cua cau truc
	char codeId[20];
	char fullName[50];
	char address[100];
	char phoneNumber[15];
	int age;
};
int main() {
    struct SinhVien sv1;
    // lay thong tin tu nguoi dung nhap
    printf("moi ban nhap ma sv: ");
    fgets(sv1.codeId,sizeof(sv1.codeId),stdin);
    printf("moi ban nhap ten sv: ");
    fgets(sv1.fullName,sizeof(sv1.fullName),stdin);
    printf("moi ban nhap dia chi sv: ");
    fgets(sv1.address,sizeof(sv1.address),stdin);
    printf("moi ban nhap so dien thoai sv: ");
    fgets(sv1.phoneNumber,sizeof(sv1.phoneNumber),stdin);
    printf("moi ban nhap tuoi sv: ");
    scanf("%d",&sv1.age);
    
    // in thong tin
    printf("ma sv: %s \t  ten sv: %s \t dia chi: %s \t so dien thoai: %s \t tuoi: %d",sv1.codeId,sv1.fullName,sv1.address,sv1.phoneNumber,sv1.age);
    

  return 0;
}

