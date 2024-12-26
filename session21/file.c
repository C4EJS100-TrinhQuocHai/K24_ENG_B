#include <stdio.h>

int main() {
  FILE *fptr; // khai bao bien con tro de lam viec voi file
  fptr = fopen("test.txt", "w");
  char fullName[50]="nguyen van a";
  int age=20;
//fptr = fopen("D:\\k24b\\filename.txt", "w");
  fprintf(fptr, "hello %s %d",fullName,age);
  return 0;
}

