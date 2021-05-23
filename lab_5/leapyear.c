//1 if the value represents a leap year.
//2 if the value does not represent a leap year.
//3 if the value is less than 1 or greater than 9999.
#include <stdio.h>
int main() {
   int y;
   scanf("%d", &y);
    if((y>=1)&&(y<=9999)){
   if (y % 400 == 0) 
   {
      printf("1");
    }else if (y % 100 == 0) {
      printf("2");
   }else if (y % 4 == 0) {
      printf("1");
   }else {
      printf("2");
   }
        }else {
        printf("3");
        }
        
}