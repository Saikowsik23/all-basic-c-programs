#include<stdio.h>
int main()
{
    int N;

    scanf("%d",&N);
     int b[100];
     int length;
     if(N==0){
         printf("0");
     }else{
    for(int i=0;N>0;i++){
        if(N%2==0){
            b[i]=0;
        }else {
            b[i]=1;}
            N=N/2;
            length=i;
    }
    printf("1");
    for(int i=length-1;i>=0;i--){
       printf("%d",b[i]);
    }
     }
}