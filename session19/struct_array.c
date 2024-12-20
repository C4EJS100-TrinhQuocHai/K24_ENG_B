#include <stdio.h>
/*
	mang cau truc: 
	mang so nguyen: 
*/
struct SinhVien{
	char fullName[50];
 	int age;
};
int main() {
	// khai bao mang cau truc sinh vien va gan gia tri
   struct SinhVien sinhVien[]={
   	{
   		" le thao phuong",
   		20
   	},
   	{
   		" trinh cao cuong",
   		18
   	}
   };
   int numbers[]={1,2,3,4,5};// numbers[i]
   // hien thi dung for
    for(int i=0; i<2; i++){
    	printf("thong tin sinh vien thu: %d ",i+1);
    	printf("ten sv: %s \t tuoi: %d \n",sinhVien[i].fullName,sinhVien[i].age);
    	
    }

  return 0;
}

