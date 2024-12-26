#include <stdio.h>

int main() {
  FILE *fptr;
  fptr= fopen("test.txt","r"); // mo file
  char myString[100];
  fgets(myString, 100, fptr );
  printf("thong tin trong file test.txt la: %s",myString); // thao tac voi file
  
//  fclose(fptr); // dong file

  return 0;
}

