#include<stdio.h>

int main(void)
{
    int m,n,p,q;
    n=100;
    while(n<=999){
    n++;
    m=n%10;
    p=n/100;
    q=(n%100)/10;
    if(n==m*m*m+p*p*p+q*q*q)break;
    printf("%d",n);}
    return 0;
}