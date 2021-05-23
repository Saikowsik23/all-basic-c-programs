#include<stdio.h>
int large(int a,int b){
    if(a>b){
        //returns a
        return a;
    }else{
        //returns b
        return b;
    }

}
int main(){
    int a;
    int b;
    //enter the value for a and b.
    scanf("%d",&a);
    scanf("%d",&b);
    //calls the functions and prints
    printf("%d",large(a, b));

}