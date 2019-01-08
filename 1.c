#include <stdio.h>
int main(int argc, const char* argv[]) {
    //Uo = Ui * R1 / (R2 + R1)
    printf("Ui = (Uo * (R2 + R1)) / R1");
    printf("R1 = (Uo * R2) / (Ui-Uo)");
    printf("R2 = (R2 * Uo) / (Ui - Uo)");
    return 0;
}
