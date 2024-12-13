#include <stdio.h>

void increaseCount(int *n){
  *n=*n+1;
}
int main() {
  int count=5;
  printf("gia tri count truoc: %d \n",count);
  increaseCount(&count);
  printf("gia tri count sau %d",count);
  return 0;
}

