#include <stdio.h>

int main() {
    int arr[5]; // Khai báo m?ng s? nguyên 5 ph?n t?
    // Yêu c?u ngu?i dùng nh?p t?ng ph?n t?
    printf("Nh?p l?n lu?t 5 ph?n t? c?a m?ng:\n");
    for (int i = 0; i < 5; i++) {
        printf("Nh?p ph?n t? th? %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    // In các ph?n t? trong m?ng ra màn hình
    printf("\nM?ng b?n dã nh?p là:\n");
    for (int i = 0; i < 5; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    return 0;
}

