#include <stdio.h>
int main(){
    int A, B, C, D;
    double p1, p2, T;

    scanf("%d%d%lf", &A, &B, &p1);
    scanf("%d%d%lf", &C, &D, &p2);

    T = (B * p1) + (D * p2);

    printf("VALOR A PAGAR: R$ %.2lf\n", T);

    return 0;

}
