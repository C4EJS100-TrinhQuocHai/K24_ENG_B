#include <stdio.h>
  
//  struct SinhVien{
//  	// khai bao cac truong thong tin
//  	char fullName[50];
//  };
  struct Book{   
  	char author[50];
  	char name[50];
  	float price;
  	
  };
  typedef struct {
  	// khai bao cac truong thong tin
  	char fullName[50];
  } SinhVien;
int main() {
	struct Book book1={"thach lam","gio lanh dau mua",125000};
	struct Book book2;
	
	SinhVien sv1 ={"tran van a"};// khai bao
	SinhVien sv2;result
    printf("ten sinh vien la %s : ",sv1.fullName);// dot operator

  return 0;
}

