#include <stdio.h>

int main()
{
    int a;
    int n500, n100, n50, n20, n10, n5, n2, n1;
    
    n500 = n100 = n50 = n20 = n10 = n5 = n2 = n1 = 0;
    scanf("%d", &a);
    if(a >= 500) 
    {
        n500 = a/500;
        a = a-(n500 * 500);
    }
    if(a >= 100)
    {
        n100 = a/100;
        a = a-(n100 * 100);
    }
    if(a >= 50)
    {
        n50 = a/50;
        a = a-(n50 * 50);
    }
    if(a >= 20)
    {
        n20 = a/20;
        a = a-(n20 * 20);
    }
    if(a >= 10)
    {
        n10 = a/10;
        a = a-(n10 * 10);
    }
    if(a >= 5)
    {
        n5 = a/5;
        a = a-(n5 * 5);
    }
    if(a >= 2)
    {
        n2 = a /2;
        a = a-(n2 * 2);
    }
    if(a >= 1)
    {
        n1 = a;
        a=a-(n1*1);
    }
    int sum=n500+n100+n50+n20+n10+n5+n2+n1;
    printf("%d",sum);
}