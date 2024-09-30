#include <stdio.h>
int fibonacci(int a){
    if(a ==0 || a ==1){
        return a;
    }
    else {
        return fibonacci( a-1)+fibonacci( a-2);
    }
    
    
    
}

int main() {
    int b;
    printf("entre la valeur de b");
    scanf("%d",&b);
    printf("%d",fibonacci(b));
    
   

    return 0;
}