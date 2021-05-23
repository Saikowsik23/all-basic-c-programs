#include<stdio.h>
int main(){
    int n;
    int s=0;
    scanf("%d",&n);
    for(int i=0;n!=0;i++){
        int last=n%10;
        n=n/10;
        if(last==0 ||last==1){
            s+=0;
        }else{
            s+=1;
        }
    }
    if(s==0){
        printf("1");
    }else{
        printf("0");
    }
    
}