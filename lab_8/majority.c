#include<stdio.h>
int solution(int arr[],int n){
    int y=0;
    int s[n];
    //making all arrays in s[] 0
    for(int i=0;i<n;i++){
        s[i]=0;    
      }
    //if two numbers are same then add 1 to s[i]
     for(int i=0;i<n;i++){
         for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
              s[i]+=1;   
            }       
         }   //checking the condition
         if(s[i]>n/2){
          return arr[i];
             y+=1;
             break;
          }else{
           y+=0;  
          }
      }
    if(y==0){
      return 0;    
    }
}
int main()
{    //enter no.of elements
    int n;
    scanf("%d",&n);
    int arr[n];
    //enter all the elements in an array
    for(int i=0;i<n;i++){
      scanf("%d",&arr[i]);    
    }
    //calls the function
    printf("%d",solution(arr, n));
    
    
}