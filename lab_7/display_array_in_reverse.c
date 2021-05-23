#include<stdio.h>
int main()
{
    int n;
    //enter n
    scanf("%d",&n);
    //declaring the size of array
    int a[n];
    //entering the elements for array a[]
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    //printing in reverse order of array a[]
    for(int i=n-1;i>=0;i--){
        printf("%d ",a[i]);
    }
}