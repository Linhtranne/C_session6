#include <stdio.h>

int main() {
    int n, i, sum = 0;
    printf("Nhap vao mot so nguyen: ");
    scanf("%d", &n);
    printf("MENU:\n");
    printf("1. In day so chia het cho 2 va giam dan (n >= so >= 2)\n");
    printf("2. In cac so nho hon n va tinh tong\n");
    printf("3. In ra cac uoc so chan cua n\n");
    printf("4. In ra cac uoc so le va so luong cac uoc so le cua n\n");
    printf("5. In ra uoc so le lon nhat cua n\n");
    printf("6. Thoat\n");
    printf("Nhap vao lua chon cua ban: ");
    scanf("%d", &i);
    switch (i) {
        case 1:
            printf("Day so chia het cho 2 va giam dan:\n");
            for (i = n; i >= 2; i -= 2) {
                printf("%d ", i);
            }
            break;
        case 2:
            printf("Cac so nho hon %d la:\n", n);
            for (i = 1; i < n; ++i) {
                printf("%d ", i);
                sum += i;
            }
            printf("\nTong cac so la: %d", sum);
            break;
        case 3:
            printf("Cac uoc so chan cua %d la:\n", n);
            for (i = 1; i <= n; ++i) {
                if (n % i == 0 && i % 2 == 0) {
                    printf("%d ", i);
                }
            }
            break;
        case 4:
            printf("Cac uoc so le cua %d la:\n", n);
            int count = 0;
            for (i = 1; i <= n; ++i) {
                if (n % i == 0) {
                    printf("%d ", i);
                    if (i % 2 != 0) {
                        count++;
                    }
                }
            }
            printf("\nSo luong cac uoc so le la: %d", count);
            break;
        case 5:
            printf("Uoc so le lon nhat cua %d la: ", n);
            for (i = n; i >= 1; --i) {
                if (n % i == 0 && i % 2 != 0) {
                    printf("%d", i);
                    break;
                }
            }
            break;
        case 6:
            printf("Tam biet!");
            break;
        default:
            printf("Lua chon khong hop le!");
    }
    return 0;
}