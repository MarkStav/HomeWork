#include <stdio.h>
int main(int argc, const char* argv[]) {
    int a,b,i = 0;        //a - высота, b - ширина
    scanf("%d", &a);
    scanf("%d", &b);
    int k = 2;
    printf("^\n");
    a --;
    while (a  > 1){
        printf("^");
        while (i+1 <= k){
            printf(" ");
            i ++;
        }
        printf("^\n");
        a--;
        k += 2;
        i = 0;
    }
    while (b > 0){
        printf("^ ");
        b--;
    }
    return 0;
}
/*
 *  ^
 *  ^ ^
 *  ^   ^
 *a ^     ^
 *  ^       ^
 *  ^         ^
 *  ^           ^
 *  ^ ^ ^ ^ ^ ^ ^ ^
 *        b
*/