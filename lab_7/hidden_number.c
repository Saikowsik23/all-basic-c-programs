//Input:
// 3
// 1 2 3
//Substracting all the elements of arrays from 2, The sum of difference is: 1 + 0 + (-1) = 0.
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);//enter n
    int a[n-1];
    //to enter the array elements for 0 to n
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int s=0;
    //storing all the sum of values in s
    for(int j=0;j<n;j++){
        s+=a[j];
    }
        //printing
    if((s/n)*n==s){
    int y=s/n;
        printf("%d",y);
    }else {
        printf("-1");
    }

}