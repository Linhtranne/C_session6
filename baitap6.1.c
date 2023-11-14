#include <stdio.h>

int main() {
    int n, i;
    printf("Nhap tu ban phim so n (1 <= n <= 9): ");
    scanf("%d", &n);
    printf("Bang cuu chuong %d:\n", n);
    for (i = 1; i <= 10; ++i) {
        printf("%d x %d = %d\n", n, i, n * i);
    }
    return 0;
}