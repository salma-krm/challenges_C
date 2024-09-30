#include <stdio.h>
int multiplication (int a ,int b){
        int p ;
        p = a*b;
        return p;
    }

int main() {
    int a , b;
    int s;
    printf("entre la valeur de a :");
    scanf("%d",&a);
    printf("entre la valeur de b :");
    scanf("%d",&b);
     multiplication(a,b);
    printf("le produit  est =%d ",multiplication(a,b));
    
    
    return 0;
}