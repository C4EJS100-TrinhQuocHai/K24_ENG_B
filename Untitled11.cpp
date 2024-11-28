#include <stdio.h>

int main() {
    int num, digit;

    // Y�u c?u ngu?i d�ng nh?p m?t s? nguy�n
    printf("Nh?p m?t s? nguy�n b?t k?: ");
    scanf("%d", &num);

    // Ki?m tra n?u s? nh?p v�o l� s? �m, chuy?n n� th�nh s? duong
    if (num < 0) {
        num = -num;  // Chuy?n s? �m th�nh duong d? x? l� d? d�ng hon
    }

    printf("C�c ch? s? trong s? d� nh?p: ");

    // L?p qua t?ng ch? s? trong s? nguy�n d� nh?p
    while (num > 0) {
        digit = num % 10;  // L?y ch? s? cu?i c�ng
        printf("%d ", digit);  // In ch? s?
        num = num / 10;  // B? ch? s? cu?i c�ng
    }

    printf("\n");

    return 0;
}

