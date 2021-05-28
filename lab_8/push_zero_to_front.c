#include<stdio.h>
int main()
{   //enter the no.of elements
    int n;
    scanf("%d",&n);
    int arr[n];
    //enter the elemnts in array
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);   
      }
    //if the position of element is 0 then swap 
    for(int i=0;i<n;i++){
        for(int j=1;j<n;j++){
              if(arr[j]==0){
                  int s=arr[j-1];
                  arr[j-1]=arr[j];
                  arr[j]=s;         
              }  
          } 
     }
    //printing the final output
 
    for(int i=0;i<n;i++){
         printf("%d ",arr[i]);    
     }
}