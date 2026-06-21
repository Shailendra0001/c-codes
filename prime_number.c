#include<stdio.h>
int main(){
    int n;
    printf("enter number: ");
    scanf("%d", &n);
    int a=1;
    if(n<=1){
        a=0;
    }else{
   for (int i=2;i<n;i++){
    if(n%i==0){
        a=0;
        break;
    }
}
   }
  if(a==0) printf("not a prime no.");
  else printf("prime no.");
    return 0;
}