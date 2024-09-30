#include <stdio.h>
int parite(int a){
    if(a%2==0){
        return 1;
    }
    
        return 0;
    
    
    
    
}

int main() {
    int b ;
    printf("entre la valeur de b");
    scanf("%d",&b);
    if(parite(b)==1){
        printf("paire");
    }
    else{
        printf("impaire");
    }
   

    return 0;
}