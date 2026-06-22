#include<stdio.h>
void namaste();
void bonjour();
int main(){
   printf("enter 'f' for french nd 'i' for indian: ");
   char ch;
   scanf("%c", &ch);
   if(ch=='i'){
     namaste();
   }else if (ch=='f'){
    bonjour();
   }else{
    printf("you entered wrong natioanlity");
   }
    return 0;
}
void namaste (){
    printf("Namaste\n");
}
void bonjour(){
    printf("bonjour\n");
}