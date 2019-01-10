#include <stdio.h>
int main(int argc, const char* argv[]) {
    int a, b = 1, c = 2;
    printf("Введите высоту равнобедренного треугольника: ");
    scanf("%d",&a);
    while (b < (a / 2 + 1)){
        printf(" ");
        b++;
    }
    printf("^\n");
    while (c < a / 2 + 1){
        b = 1;
        while (b <= (a / 2 + 1 - c)){
            printf(" ");
            b++;
        }
        printf("^");
        b = 1;
        while (b <= ((c - 1) * 2 - 1)){
            printf(" ");
            b++;
        }
        printf("^\n");
        c++;
    }
    b = 1;
    if (a % 2 == 0) {
        while (b <= a + 1) {
            printf("^");
            b++;
        }
    } else {
        while (b <= a) {
            printf("^");
            b++;
        }
    }
    return 0;
}

/*
 *           ^
 *          ^ ^
 *         ^   ^
 *        ^     ^
 *       ^^^^^^^^^
