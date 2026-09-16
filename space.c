#include<stdio.h>
#include<ctype.h>

int main(){
    char ch;
    scanf("%c",&ch);
    if(isspace(ch)){
        printf("space");
    }else{
        printf("not space");
    }
    return 0;
}