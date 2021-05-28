#include<stdio.h>
int main()
{
    int n;
    //enter  the no.of elements
    scanf("%d",&n);
    int arr[n];
    //enter the elements in an array
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
      }
    //if they are even print
     for(int i=0;i<n;i++){
         if(arr[i]%2==0){
             printf("%d ",arr[i]);  
           }    
     }
    //if they are odd then print
    for(int i=0;i<n;i++){
         if(arr[i]%2!=0){
           printf("%d ",arr[i]);     
           }     
      }
                 
}