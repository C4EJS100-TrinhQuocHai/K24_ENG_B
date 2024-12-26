#include <stdio.h>
struct SinhVien{
	char id[50];
	char name[50];
	int age;
};
//  
struct SinhVien sv[100];// global
// tao ham de sinh vien o trong file sinhvien.bin
int numberStudent=0;
void getStudentByFile();
// tao ham in danh sach sinh vien
void printfStudent();
// tao ham them sinh vien
void addStudent();
// tao ham luu sinh vien vao file;
void saveStudent();

int main() {
  // goi ham lay danh sach sinh vien tu trong file
  getStudentByFile();
  int choose;
  do{
  	printf("1. in danh sach sinh vien \n");
  	printf("2. them sinh vien \n");
  	printf("3. sua thong tin sinh vien \n");
  	printf("4. xoa sinh vien \n");
  	printf("5. tim thong tin sinh vien \n");
  	printf("6. sap xep sinh vien \n");
  	printf("7. thoat \n");
  	printf("moi ban nhap lua chon: ");
  	scanf("%d",&choose);
  	getchar();
  	switch(choose){
  		case 1: {
  			// tao ham in danh sach sinh vien
  			printStudent();
  			break;
  		}
  		case 2:{
			  addStudent();
  			break;
  		}
  		case 3:{
  			// sua sinh vien
  			/*
  			B1: nhap ma sinh vien
  			B2: kiem tra co ton tai sinh vien
  				+ neu ton tai: thi cho nguoi dung nhap lai name, tuoi
  				==> di update ==> luu lai trong file
  			    + neu khong co : ==> hien thi khong co sinh vien!
			  /
  			break;
  		}
  		case 4:{
  			break;
  		}
  	}
  	
  }while(choose!=7);
  return 0;
}
void getStudentByFile(){
	FILE *file;
	// mo file
	file= fopen("sinhvien.bin","rb");
	if(file==NULL){
		printf("khong the mo file \n");
		return;
	}
	// thao tac voi file: lay du lieu tu trong file
	numberStudent=fread(&sv,sizeof(sv),1,file);
	// dong file
	fclose(file);
}
void printStudent(){
	if(numberStudent==0){
		printf("khong co sinh vien \n");
		return;
	}
	for(int i=0; i< numberStudent; i++){
		printf("thong tin sinh vien thu %d \n",i+1);
		printf("ma sv: %s \n", sv[i].id);
		printf("ten sv: %s \n", sv[i].name);
		printf("tuoi sv: %d \n", sv[i].age);
	}
}
// ham di them sinh vien
void addStudent(){
	if(numberStudent>100){
		printf("danh sach sinh vien da day \n");
		return;
	}
	// tao doi tuong sinh vien tu cau truc SinhVien
	struct SinhVien sv1;
	// cho nguoi dung nhap thong tin sinh vien
	printf("nhap id: ");
	fgets(sv1.id,sizeof(sv1.id), stdin);
	sv1.id[strcspn(sv1.id,"\n")]='\0';
	printf("nhap ten: ");
	fgets(sv1.name,sizeof(sv1.name), stdin);
	sv1.name[strcspn(sv1.name,"\n")]='\0';
	printf("nhap tuoi: ");
	scanf("%d",&sv1.age);
	sv[numberStudent]=sv1;
	// di luu lai trong file
	numberStudent++;
	saveStudent();
}
void saveStudent(){
	FILE *file;
	// mo file
	file= fopen("sinhvien.bin","wb");
	// thao tac voi file
	fwrite(sv,sizeof( struct SinhVien),1,file);
	// dong file
	fclose(file);
	
}

