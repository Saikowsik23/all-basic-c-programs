#include<stdio.h>
int main()
{
    int N;
//enter the decimal value
    printf("enter the decimal number:\n");
    scanf("%d",&N);
     int b[32];
     int length;
  //if  the enter number is 0 then the binary is 0
     if(N==0){
         printf("0");
     }else{
       //if the number divided by 2 then that intitial number is 0 else 1 and it goes on.
       //this prints in reverse order.
    for(int i=0;N>0;i++){
        
        if(N%2==0){
            b[i]=0;
        }else {
            b[i]=1;
        }
            N=N/2;
            length=i;
    }
     //this prints it in right order
    printf("the binary number is: \n");
    printf("1");
    for(int i=length-1;i>=0;i--){
       printf("%d",b[i]);
    }
     }
}
