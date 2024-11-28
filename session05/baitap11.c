#include <stdio.h>
#include <math.h>

int main() {
    int num, sum, digit, temp;
    // Duy?t qua c�c s? t? 100 d?n 999
    for (num = 100; num <= 999; num++) {
        temp = num;
        sum = 0;
        // T�ch c�c ch? s? v� t�nh t?ng l?p phuong
        while (temp != 0) {
            digit = temp % 10; // L?y ch? s? cu?i
            sum += pow(digit, 3); // T�nh l?p phuong c?a ch? s?
            temp /= 10; // B? ch? s? cu?i
        }
        // Ki?m tra n?u t?ng l?p phuong b?ng s? ban d?u
        if (sum == num) {
            printf("%d ", num);
        }
    }

    return 0;
}

