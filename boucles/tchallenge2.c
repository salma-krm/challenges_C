#include <stdio.h>


    int main (){
    int n;
    int f;
    f = 1;
    printf("entre la valeur de n");
    scanf("%d",&n);
    
    for( int i=1 ; i <= n; i++){
        f *= i;
       
    }
    printf("la factorielle est %d",f);
    
   
    
    
    
    
   
   
   
    

    return 0;
}