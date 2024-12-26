#include <stdio.h>
struct Book{
	char id[50];
	char title[50];
	float price;
};
//typedef struct{
//	char id[50];
//	char title[50];
//	float price;
//} Book;
int main() {
  FILE *file; // tao bien con tro
  struct Book book1={"book001","nha gia kim",125000};
  // mo/tao file
  file= fopen("struct_book.bin","wb");
  // thao tac, ghi thong tin vao file
  fwrite(&book1, sizeof(book1), 1, file);
  
  // dong file
  fclose(file);

  return 0;
}

