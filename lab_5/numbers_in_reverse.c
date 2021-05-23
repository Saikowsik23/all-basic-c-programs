#include<stdio.h>
int solution(int N)
{
    int i;
    for(i=N; i>1; i--)
    {
        printf("%d ", i);
    }
    return 1;
}

//Your program will be evaluated by this main method and several test cases.
int main()
{
    int N;
    scanf("%d",&N);
    printf("%d",solution(N));
    return 1;
}