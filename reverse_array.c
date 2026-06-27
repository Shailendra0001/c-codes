#include<stdio.h>
  
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         
int main(){
    int arr[5]={1,2,3,4,5};
    for (int i=0; i<5; i++){

        printf("%d\t"\n,arr[i]);
    }
 
    for (int i=4; i>-1;i--){
        printf("    %d\t",arr[i]);
    }

    return 0;
    
   }