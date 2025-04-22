#include <stdio.h>
int main(){
    char A;
    double B, C, T;

    scanf("%s%lf%lf", &A, &B, &C);

    T = B + (C * 0.15);

    printf("TOTAL = R$ %.2lf\n", T);

    return 0;
}
