#include <stdio.h>
struct Book{
	char id[50];
	char title[50];
	float price;
};
int main() {
	FILE *file;
	struct Book book1;
	// mo file
	file=fopen("struct_book.bin","rb");
	// kiem tra xem file co mo duoc k
	if(file==NULL){
		printf("khong mo duoc file");
		return 1;
	}
	// thao tac voi file (doc file)
	fread(&book1, sizeof(book1), 1, file);
	
	// dong file
	fclose(file);
	// hien thi thong tin sach
	printf("ma sach: %s \t", book1.id);
	printf("ten sach: %s \t", book1.title);
	printf("gia sach: %0.f \t", book1.price);

  return 0;
}

