#include <stdio.h>

int main() {
	int number=66666677777;
  /*
  	File Binary (file nhi phan)
  	Luong hoat dong giong voi van ban
  	Gom 3 buoc
  		B1: Mo/tao file
  		B2: Thao tac voi file
  		B3: Dong file
  */
    // tao bien con tro
   	FILE *file;
   	// mo file
   	/*
   		file van ban: .txt
   		fputc, fputs, fprintf(luu duoc kieu dinh dang)
   		file nhi phan: .bin, .dat
   		fwrite
	*/
   	file= fopen("binary_vd1.bin","wb");// write binary
   	// thao tac voi file : ghi du lieu vao file
   	fwrite(&number,sizeof(int),1,file);
   	// dong file
   	fclose(file);
  return 0;
}

