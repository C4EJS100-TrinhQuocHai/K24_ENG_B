#include <stdio.h>
 struct Author{
 	char name[50];
 	char address[50];
 	int age;
 };
 struct Book{
 	char name[50];
 	float price;
 	struct Author auth1;
 };
 
 
int main() {
   struct Book book1;
   strcpy(book1.name,"chiec thuyen ngoai xa");
   strcpy(book1.auth1.name,"nguyen minh chau");
   // in ra thong tin
   printf("ten sach: %s \n",book1.name);
   printf("ten tac gia: %s \n",book1.auth1.name);
  return 0;
}

