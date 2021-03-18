#include<stdio.h>
int main(){
    int n;
    //enter the value of perfect square number to check
  printf("enter the value of the square number to check:\n");
    scanf("%d",&n);
    //to check whether it is perfect square number or not
    int s=0;
    //checking whether it is perfect square number or not
    for(int i=1;i<n;i++){
        if(i*i==n){
            s+=1;
        }else{
            s+=0;
        }
    }
    //returns 1 if it is perfect square number or 0 if it is not
    if(s==1){
        printf("1");
    }else{
        printf("0"); 
    }
}
