#include <stdio.h>

/*
	Khai b�o v� g�n gi� tri cho mot chuoi bat ki
	viet hoa chu cai dau tu trong chuoi
	
*/
int main() {
        char text[]="xin chao sinh vien K24 class eng_b";
	    int size= strlen(text);
	    for(int i=0; i< size; i++){
	    	if(i==0 || text[i-1]==' '){
	    		if(text[i]>='a' && text[i]<='z'){
	    			text[i]=toupper(text[i]);
	    		}
	    	}
	    }
	    printf("%s",text);
  return 0;
}

