#include <stdio.h>
int maximum (int a ,int b){
    int max ;
    if(a>b){
        max =a;
    }else{
        max = b;
        
    }
    return max ;
    }

int main() {
    int a , b;
    int max;
    printf("entre la valeur de a :");
    scanf("%d",&a);
    printf("entre la valeur de b :");
    scanf("%d",&b);
     maximum(a,b);
    printf("le maximum  est =%d ",maximum(a,b));
    
    
    return 0;
}