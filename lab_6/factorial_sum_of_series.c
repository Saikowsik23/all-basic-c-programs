//Given number N as input, find the sum of the series 1/1!+2/2!+3/3!+4/4!+5/5!+.....N/N! using a function.
#include<stdio.h>
int main(){
    int n;
    int factorial=1;
    scanf("%d",&n);
    float sum=0;
    for(float i=1;i<=n;i++){
        factorial=factorial*i;
        sum=sum+(i/factorial);
    }
     printf("%.3f",sum);
}