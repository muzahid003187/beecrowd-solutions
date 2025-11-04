#include<stdio.h>
int main(){

    int pc1,pn1,pc2,pn2;
    float pp1, pp2, price1,price2,tp;
    scanf("%d %d %f", &pc1, &pn1, &pp1);
    scanf("%d %d %f", &pc2, &pn2, &pp2);

    price1 = pn1 * pp1;
    price2 = pn2 * pp2;

    tp = price1 + price2;
    printf("VALOR A PAGAR: R$ %.2f\n", tp);
    return 0;
}