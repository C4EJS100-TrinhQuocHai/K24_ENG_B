#include <stdio.h>

int main() {
  int num[]={3,7,5,9,11};
  int count=1;
  for(int i=0;i<sizeof(num)/sizeof(num[0]);i++){
  	if(num[i]%2==0){
  		count++;
  		printf("so chan trong num %d \n",num[i]);
  	}
  }
	if(count==1){
		printf("trong mang num khong co so chan");n
	}
  return 0;
}

