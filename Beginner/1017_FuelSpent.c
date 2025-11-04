#include<stdio.h>
int main(){

    int a,b, dis;
    double fuel;
    scanf("%d %d", &a, &b);

    dis = a * b;
    fuel = dis/12.0;

    printf("%.3lf\n", fuel);

    return 0;
}