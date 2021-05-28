#include<stdio.h>
int main()
{
    int n;
    //enter number of elements
    scanf("%d",&n);
    int arr[n-1];
    //enter the array elements
    for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);     
    }
    //checking wheather it is divisible by 5 or not 
    for(int i=0;i<n;i++){
    if(arr[i]%5!=0){//prints if it is divisible
        printf("%d ",arr[i]);
      } 
    }
}