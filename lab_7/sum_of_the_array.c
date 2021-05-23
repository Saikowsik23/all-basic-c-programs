#include<stdio.h>
int main(){
    long long  n;
    scanf("%lld",&n);//enter n
    long long a[n-1];
    //to enter the array elements for 0 to n
    for(int i=0;i<n;i++){
        scanf("%lld",&a[i]);
    }
    long long s=0;
    //storing all the sum of values in s
    for(long long i=0;i<n;i++){
        s+=a[i];
    }
    //printing
    printf("%lld",s);
}