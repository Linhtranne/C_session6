#include <stdio.h>

int main() {
    int num1, num2, num3, choice;
    printf("Nhap vao 3 so nguyen: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    printf("MENU:\n");
    printf("1. Tinh tong 3 so nguyen\n");
    printf("2. Tinh trung binh cong cua 3 so nguyen\n");
    printf("3. Tim so lon nhat va nho nhat trong 3 so nguyen\n");
    printf("4. Thoat\n");
    printf("Nhap vao lua chon cua ban: ");
    scanf("%d", &choice);
    switch (choice) {
        case 1:
            printf("Tong 3 so nguyen la: %d\n", num1 + num2 + num3);
            break;
        case 2:
            printf("Trung binh cong cua 3 so nguyen la: %.2f\n", (float)(num1 + num2 + num3) / 3);
            break;
        case 3:
            if (num1 >= num2 && num1 >= num3) {
                printf("So lon nhat trong 3 so nguyen la: %d\n", num1);
            } else if (num2 >= num1 && num2 >= num3) {
                printf("So lon nhat trong 3 so nguyen la: %d\n", num2);
            } else {
                printf("So lon nhat trong 3 so nguyen la: %d\n", num3);
            }
            if (num1 <= num2 && num1 <= num3) {
                printf("So nho nhat trong 3 so nguyen la: %d\n", num1);
            } else if (num2 <= num1 && num2 <= num3) {
                printf("So nho nhat trong 3 so nguyen la: %d\n", num2);
            } else {
                printf("So nho nhat trong 3 so nguyen la: %d\n", num3);
            }
            break;
        case 4:
            printf("Tam biet!");
            break;
        default:
            printf("Lua chon khong hop le!");
    }
    return 0;
}