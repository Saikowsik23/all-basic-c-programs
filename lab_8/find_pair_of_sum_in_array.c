#include<stdio.h>
int main()
{
   int sum;
    //enter the sum
    scanf("%d",&sum);
    int n;
    //enter the no.of elements
    scanf("%d",&n);
    long long arr[n];
    int s=0;
    //enter the array elements 
    for(int i=0;i<n;i++){
    scanf("%lld",&arr[i]);
    }
    for(int i=0;i<n-1;i++){
       for(int j=i+1;j<n;j++){
             if((arr[j]+arr[i])==sum){
                 s=s+1;   
              }  
         }
     }
   if(s>0){
    printf("1"); 
    }else{
        printf("0");
     }
 
}