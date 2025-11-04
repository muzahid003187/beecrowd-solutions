#include<stdio.h>
int main(){

    int x;
    double y;

    scanf("%d %lf", &x, &y);
    double avg = x/y;

    
    printf("%.3lf km/l\n", avg);
    return 0;
}