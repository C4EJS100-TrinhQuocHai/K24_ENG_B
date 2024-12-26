#include <stdio.h>

int main() {
  char fullName[]="le thao phuong";
  printf("dia chi cua fullname: %p ", fullName);
  FILE *file;
  // mo/tao file
	file= fopen("binary_vd2.bin","wb");
	
  // thao tac voi file
	fwrite(fullName,sizeof(char),sizeof(fullName),file);
  
  // dong file
	fclose(file);
  

  return 0;
}

