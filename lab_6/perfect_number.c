//A natural number N is called a perfect number if the sum of its proper divisors is equal to itself.  
//it takes a number N and displays 1 if N is perfect number else 0.
#include<stdio.h>
int solution(int N)
{
    int i=1;
    int sum=0;
    for(N;N>i;i++){
        if(N%i==0){
            sum+=i;
        }
    }
    if(N==sum){
        return 1;
    }else return 0;
}
int main()
{
    int N;
    scanf("%d",&N);
    printf("%d",solution(N));
}