#include<stdio.h>
int main()
{
    int n;
    //enter number of elements
    scanf("%d",&n);
    int arr[n-1];
    int s[n-1];
    //entering all the elements in an array
    for(int i=0;i<n;i++){
    scanf("%d",&arr[i]); 
        s[i]=0;
    }
    //if 2 elements are equal then adding it to s[] and then check 
    //whether it is divisible by 2 or not.
    for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
         if(arr[i]==arr[j]){
            s[i]=s[i]+1;
         }
     } 
        if(s[i]%2==1){
         printf("1");
             break;
        }
        }
    //checking whether there is no odd occurence or not
    int y=0;
    for(int i=0;i<n;i++){
    if(s[i]%2==0){
       y++;
     }     
   }
    if(y==n){
    printf("0");  
    }
}