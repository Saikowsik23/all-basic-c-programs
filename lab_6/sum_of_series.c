//Given an integer N, display the sum of the series 1 + 22 + 333 + 4444... up to N terms.
#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d",&n);
    int x=0;
    for(int i=1;i<=n;i++){
        x=x+i*pow(10,i);
    }
       int y=x;
       y=y-n;
       y=y/9;
       if(n<=4){
       printf("%d",y);
       }
       else if(n<=6){
           y=y-1;
           printf("%d",y);
       }
       else{
           y=y-2;
           printf("%d",y);
       }
}