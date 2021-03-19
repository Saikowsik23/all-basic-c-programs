#include<stdio.h>
int main()
{
   int n;
    //enter number of elements
    scanf("%d",&n);
    int arr[n];
    //enter the elements of an array
    for(int i=0;i<n;i++){
      scanf("%d",&arr[i]);  
     } 
    arr[n]=0;
    //enter new element
    int ne;
    scanf("%d",&ne);
    //enter position
    int pos;
    scanf("%d",&pos);
    //making 0 @ position k
    for(int i=n-1;i>=pos;i--){
        int m=arr[i];
      arr[i]=arr[i+1];
        arr[i+1]=m;  
    }//inserting element @ position k
    arr[pos]=ne;
    //printing
    for(int i=0;i<=n;i++){
     printf("%d ",arr[i]);  
    }
    
}
