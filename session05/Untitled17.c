#include <stdio.h>

int main() {
    int arr[5]; // Khai b�o m?ng s? nguy�n 5 ph?n t?
    // Y�u c?u ngu?i d�ng nh?p t?ng ph?n t?
    printf("Nh?p l?n lu?t 5 ph?n t? c?a m?ng:\n");
    for (int i = 0; i < 5; i++) {
        printf("Nh?p ph?n t? th? %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    // In c�c ph?n t? trong m?ng ra m�n h�nh
    printf("\nM?ng b?n d� nh?p l�:\n");
    for (int i = 0; i < 5; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    return 0;
}

