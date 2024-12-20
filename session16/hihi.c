#include <stdio.h>

int main(){
	char inputString[100];
	char reverseString[100];
	printf("Moi ban nhap chuoi");
	fgets(inputString,100,stdin);
	char *ptr =  reverseString;
	for(int i=strlen(inputString)-1;i>=0;i--){
		*ptr  = reverseString;
		 ptr ++;
	}
	printf("Mang ban dau la %s\n",inputString);
	printf("Mang dao nguoc la %s\n",reverseString);
	
	return 0;
}


