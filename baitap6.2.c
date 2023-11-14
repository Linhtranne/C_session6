#include <stdio.h>

int main() {
    int choice, num1, num2;
    printf("Nhap vao 2 so nguyen: ");
    scanf("%d %d", &num1, &num2);
    printf("MENU:\n");
    printf("1. Tinh tong 2 so\n");
    printf("2. Tinh hieu 2 so\n");
    printf("3. Tinh tich 2 so\n");
    printf("4. Tinh thuong 2 so\n");
    printf("5. Tinh so du trong phep chia 2 so\n");
    printf("6. Tim uoc chung lon nhat cua 2 so\n");
    printf("7. Tim boi chung nho nhat cua 2 so\n");
    printf("8. Thoat\n");
    printf("Nhap vao lua chon cua ban: ");
    scanf("%d", &choice);
    switch (choice) {
        case 1:
            printf("%d + %d = %d\n", num1, num2, num1 + num2);
            break;
        case 2:
            printf("%d - %d = %d\n", num1, num2, num1 - num2);
            break;
        case 3:
            printf("%d * %d = %d\n", num1, num2, num1 * num2);
            break;
        case 4:
            printf("%d / %d = %d\n", num1, num2, num1 / num2);
            break;
        case 5:
            printf("%d %% %d = %d\n", num1, num2, num1 % num2);
            break;
        case 6:
            while (num1 != num2) {
                if (num1 > num2) {
                    num1 -= num2;
                } else {
                    num2 -= num1;
                }
            }
            printf("Uoc chung lon nhat cua 2 so la: %d\n", num1);
            break;
        case 7:
            int i, max;
            max = (num1 > num2) ? num1 : num2;
            for (i = max; i <= num1 * num2; ++i) {
                if (i % num1 == 0 && i % num2 == 0) {
                    printf("Boi chung nho nhat cua 2 so la: %d\n", i);
                    break;
                }
            }
            break;
        case 8:
            printf("Tam biet!");
            break;
        default:
            printf("Lua chon khong hop le!");
    }
    return 0;
}