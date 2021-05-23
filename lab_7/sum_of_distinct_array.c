#include<stdio.h>
int main(){
    int n;
    //enter n
    scanf("%d",&n);
    int a[n-1];
    //enter the values of the array n
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int sum=0;
    //replacing the duplicate values with 0
    for(int i=0;i<n;i++){
        int s=0;
        for(int j=0;j<n;j++){
            if(a[i]==a[j]){
                s+=1;
            }
        }
        if(s!=1){
             a[i]=0;   
            }
    }
    //adding all the array elements in sum
    for(int i=0;i<n;i++){
        sum=sum+a[i];
    }
    printf("%d",sum);
}