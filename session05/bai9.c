#include <stdio.h>

int main() {
  int number;
  int temp;
  int sum=0;
	
  for(int i=100; i<=999; i++){
  	number=i;
  	sum=0;
  	//371
  	while(number!=0){
  		temp= number%10;//1
  		sum+=temp*temp*temp;//1
  		number=number/10;
  	}
  	if(sum==i){
  		printf("%d \n",i);
  	}
  	
  }

  return 0;
}

