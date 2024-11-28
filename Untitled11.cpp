#include <stdio.h>

int main() {
    int num, digit;

    // Yêu c?u ngu?i dùng nh?p m?t s? nguyên
    printf("Nh?p m?t s? nguyên b?t k?: ");
    scanf("%d", &num);

    // Ki?m tra n?u s? nh?p vào là s? âm, chuy?n nó thành s? duong
    if (num < 0) {
        num = -num;  // Chuy?n s? âm thành duong d? x? lý d? dàng hon
    }

    printf("Các ch? s? trong s? dã nh?p: ");

    // L?p qua t?ng ch? s? trong s? nguyên dã nh?p
    while (num > 0) {
        digit = num % 10;  // L?y ch? s? cu?i cùng
        printf("%d ", digit);  // In ch? s?
        num = num / 10;  // B? ch? s? cu?i cùng
    }

    printf("\n");

    return 0;
}

