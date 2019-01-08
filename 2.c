#include <stdio.h>
int main(int argc, const char* argv[]) {
    int n;
    scanf("%d",&n);
    (n >= 0 && n <= 100)?(printf("%d принадлежит отрезку [0;100]",n)) :
    (printf("%d не принадлежит отрезку [0;100]", n));
    return 0;
}
