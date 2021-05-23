#include<stdio.h>
int main()
{
    int N;
    long int x=1;
    scanf("%d",&N);
    for(int i=1;i<=N;i++){
        x*=i;
    }
    printf("%ld",x);
}