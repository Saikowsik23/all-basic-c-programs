#include<stdio.h>
#include<string.h>
int main(){
   char str[10000];
   //storing all the characters
    scanf("%s",&str);
    //storing the length of all characters
    int len = strlen(str);
    int s=0;
    //running the loop as long it would be equal to null character
    //if s=0 then it is palindrome or else it is not
    for(int i=0;str[i]!='\0';i++){
        if(str[i]==str[len-1-i]){
            s+=0;
        }else{
            s+=1;
        }
    }
    //checking the palindrome.
    if(s==0){
      printf("1");
     }else{
      printf("0");
    }
}