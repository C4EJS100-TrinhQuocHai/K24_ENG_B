#include <stdio.h>

int main() {
   char text[]="fhdf2!3@ff"; // in ra so luong cac chu cai: 6
   int count=0;
   int length= strlen(text);
   for(int i=0; i< length; i++){
   	 if(text[i]>='a'&& text[i]<='z'){
   	 	count++;
   	 }
   	 if(text[i]>='A'&&text[i]<='Z'){
   	 	count++;
   	 }
   }
   printf("%d",count);
   
  return 0;
}

