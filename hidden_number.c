#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);//enter n
    int a[n-1];
    int y;
    //to enter the array elements for 0 to n
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    float s=0;
    //storing all the sum of values in s
    for(int j=0;j<n;j++){
        s+=a[j];
    }
     y=s/n;
    //printing
    printf("%d",y);
}
