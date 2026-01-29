#include<stdio.h>
int main(){
    int n;
    sacnf("%d",&n);
    if(n&1){
        printf("odd");
    }else{
        printf("Even");
    }
    return 0;
}