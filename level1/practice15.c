#include<stdio.h>
int main ()
{
    double P,T,R,interest;
    printf("enter a P,T,R");
    scanf("%lf %lf %lf",&P,&T,&R);
    interest=P*T*R/100;
    return 0;
}