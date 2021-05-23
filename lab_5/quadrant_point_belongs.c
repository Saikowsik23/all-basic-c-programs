//print '1' if point is in 1st quadrant.
//print '2' if point is in 2nd quadrant.
//print '3' if point is in 3rd quadrant.
//print '4' if point is in 4th quadrant.
//point (0, 0) is the origin, print '0' for origin.
#include<stdio.h>
int main()
{
    float x,y;
    scanf("%f",&x);
    scanf("%f",&y);
    if((x>0) && (y>0)){
    printf("1");
    }
    else if((x<0) && (y>0)){
    printf("2");
    }
    else if((x<0) && (y<0)){
    printf("3");
    }
    else if((x>0) && (y<0)){
    printf("4");
    }
    else if((x==0) && (y==0)){
    printf("0");
    }
}