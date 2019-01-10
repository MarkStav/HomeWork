#include <stdio.h>
int main(int argc, const char* argv[]) {
    int i = 1;
    int sum = 0;
    printf("Введите последовательность чисел:\n");
    while (i <= 10){
        int n = 0;
        scanf("%d",&n);
        sum += n;
        i ++;
    }
    printf("Среднее арифметическое введённых чисел = %.1f",(double)sum / 10.0 );
    return 0;
}
