#include <stdio.h>
/*
	khai bao mang cau truc sinh vien,moi sinh vien gom cac thong tin:
	id, name, phoneNumber, address, gender, age;
	yeu cau nguoi dung nhap so luong sinh vien, nhap thong tin cho tung sinh vien
*/
// tao struct SinhVien
  struct SinhVien{
  	// cac truong thong tin hay con goi la cac thuoc  tinh.( property)
  	int id;
  	char name[20];
  	char phoneNumber[15];
  	char address[50];
  	int gender;
  	int age; 
  };

int main() {
  	// tao mang cau truc
    struct SinhVien sv[1000];
    int n; // so luong sinh vien
    printf("moi ban nhap so luong sinh vien: ");
    scanf("%d",&n);
    for(int i=0; i<n; i++){
    	sv[i].id=i;
    	printf("moi nhap thong tin sinh vien thu: %d \n",i+1);
    	fflush(stdin);// xoa ki tu enter trong bo nho dem
    	printf("nhap ten: ");
    	fgets(sv[i].name,sizeof(sv),stdin);
    	printf("nhap sdt: ");
    	fgets(sv[i].phoneNumber,sizeof(sv),stdin);
    	printf("nhap dia chi: ");
    	fgets(sv[i].address,sizeof(sv),stdin);
    	printf("nhap gioi tinh");
    	scanf("%d",&sv[i].gender);
    	printf("nhap tuoi");
    	scanf("%d",&sv[i].age);
    }
    // in thong tin sinh vien ra:
    for(int i=0; i<n; i++){
    	printf("sinh vien thu %d: ",i+1);
    	printf("ten: %s \t sdt: %s ",sv[i].name,sv[i].phoneNumber);
    }

  return 0;
}

