#include<stdio.h>
int main()
{
    int n;
    int s=1;
  //enter the number.
    scanf("%d",&n);
  //checking how many does this number take to change to 1.
    for(int i=n;n!=1;i=i+0){
     if(n%2==0){
         n=n/2;   
         s+=1;
        }else{
          n=3*n+1; 
           s+=1;
        }  
    }
  //prints the number of times it takes.
    printf("%d",s);
}
