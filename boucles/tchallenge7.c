#include <stdio.h>


int main() {
    
    
    int n, i = 0;
    printf("entre la valeur ded n:");
    scanf("%d",&n);
   
    
    while(n>0){ 
        printf("%d",n%10); 
        n = n/10;
        
         i++;
    }
    
    return 0;
}