#include <stdio.h>
int somme (int a ,int b){
        int s ;
        s = a+b;
        return s;
    }

int main() {
    int a , b;
    int s;
    printf("entre la valeur de a :");
    scanf("%d",&a);
    printf("entre la valeur de b :");
    scanf("%d",&b);
     somme(a,b);
    printf("la somme est =%d ",somme(a,b));
    
    
    return 0;
}