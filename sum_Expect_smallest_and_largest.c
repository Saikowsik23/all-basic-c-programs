#include<stdio.h>
int solution(){

}
int main()
{
    int n;
    //enter n
    scanf("%d",&n);
    //declaring the size of array
    int a[n-1];
    int s=0;
    int y=0;
    int sum=0;
    //entering the elements for array a[]
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int large=a[0];
    int small=a[0];
    //finding largest and smallest
    for(int i=0;i<n;i++){
            if(a[i]>large){
                large=a[i];
            }
            if(a[i]<small){
                small=a[i];
            }
    }
    //finding how many largest and smallest are there
    for(int i=0;i<n;i++){
        if(a[i]==large){
            s+=1;
        }
        if(a[i]==small){
            y+=1;
        }
    }
    //adding all the elements into sum
    for(int i=0;i<n;i++){
        sum=sum+a[i];
    }
    //if there are repeating elements then subtracting
    if(s!=1){
        sum=sum-large;
    }
     if(y!=1){
        sum=sum-small;
    }
    if(y==1){
        sum=sum-small;
    }
    if(s==1){
        sum=sum-large;
    }
    printf("%d",sum); 
}
