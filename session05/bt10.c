#include <stdio.h>
#include <math.h>
int main() {
  // cho nguoi dung nhap so bat ki
	int n;
	int number;
	int count;
	int prime=2;
	printf("moi nhap so luong so nguyen to: ");
	scanf("%d",&n);
	while(number<n){
		count=0;
		for(int i=1; i<= sqrt(prime); i++){
			if(prime%i==0){
				count++;
			}
		}
		if(count==1){
			printf("\n so nguyen to %d:",prime);
			number++;
		}
		prime++;
	}
  return 0;
}

