#include <stdio.h>
int a  ,b;
int minimum(){
    int min ;
    if(a<b){
        min =a;
    }else{
        min = b;
        
    }
    return min ;
    }

int main() {
    int min;
    printf("entre la valeur de a :");
    scanf("%d",&a);
    printf("entre la valeur de b :");
    scanf("%d",&b);
     minimum();
    printf("le minimum  est =%d ",minimum());
    
    
    return 0;
}