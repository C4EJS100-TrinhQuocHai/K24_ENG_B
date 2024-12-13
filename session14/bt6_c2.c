#include <stdio.h>

int main() {
   char text[]="fdf2!3@ff"; // in ra so luong cac chu cai: 6
   int count=0;
   int length= strlen(text);
   for(int i=0; i<length; i++){
   	 if(isalpha(text[i])){
   	 	count++;
   	 }
   }
   printf("%d",count);

  return 0;
}

