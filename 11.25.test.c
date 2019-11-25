#include<stdio.h>

int main(void)
{
    int m,n,p,q;

    for(n=100;n<1000;n++);
    m=0;
    p=n;
    while(p>0){
        p=p%10;
        m=p*p*p;
        p=p/10;
        if(n==m)break;
        printf("%d",n);
    }
    return 0;
}
