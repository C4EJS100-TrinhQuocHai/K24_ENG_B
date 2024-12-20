#include <stdio.h>

int main() {
  int a=5;
  int *ptr=&a;
  int result= *ptr+3;
  printf("%p", result);
	// pointer
  return 0;
}

