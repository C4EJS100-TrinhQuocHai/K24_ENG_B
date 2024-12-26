#include <stdio.h>
/*
 lam viec voi mang cau truc:
 
*/
 struct SinhVien{
 	char id[20];
 	char name[20];
 	int age;
 	char phoneNumber[15];
 };
 // tao ham update sinh vien theo id nguoi dung nhap.
 void updateSinhVien(struct SinhVien *sinhVien[],int n, char findById[]);// khai bao nguyen mau ham.
int main() {
	 char findById[50];
    struct SinhVien sv[50]={
   	{
   		"abc01",
   		"nguyen van a",
   		 18,
   		 "088811156"
   	},
   	{
   		"abc02",
   		"nguyen van b",
   		 18,
   		 "088912233"
   	},
   	{
   		"abc03",
   		"nguyen van c",
   		 18,
   		 "0885545"
   	},
   	{
   		"abc04",
   		"nguyen van d",
   		 19,
   		 "08875454"
   	},
   	{
   		"abc05",
   		"nguyen van e",
   		 20,
   		 "0882334343"
   	}
   };
   printf("moi ban nhap id cua sinh vien can update: ");
   fgets(findById,sizeof(findById),stdin);
   updateSinhVien(&sv,  5, findById);
   printf("fdfdfdf");
   printf("ten sinh vien vua update: %s ",sv[2].name);
  return 0;
}
	// noi di trien khai cac ham
	updateSinhVien(struct SinhVien *sinhVien[],int n, char findById[]){
		// phai kiem tra xem id nguoi dung nhap co ton tai hay khong?
	
		for(int i=0; i<n; i++){
			if(strcmp(findById,sinhVien[i]->id)){
				strcpy(sinhVien[i]->name,"nguyen van cam");
				return;
			}
		}
		printf("khong ton tai id thoa man!");
	
	}

