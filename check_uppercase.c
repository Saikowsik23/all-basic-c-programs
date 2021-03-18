#include<stdio.h>
int main()
{
    char str[100];
    scanf("%s",&str);
    int s;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]>='A'&&str[i]<='Z'){
            s=s+0;
        }else{
            s=s+1;
        }
    }
    if(s==0){
        printf("yes");
    }else{
        printf("no");
    }
}
