#include<stdio.h>
int main(){ 

    int adhaar[5];
    int *ptr=adhaar;

for (int i=0; i<5; i++ ){
    printf("%d index: ", i);
    scanf("%d", (ptr+i));
}
for (int i=0; i<5; i++ ){
    printf("%d index: %d", i,*(ptr+i));
    

}

return 0;
}